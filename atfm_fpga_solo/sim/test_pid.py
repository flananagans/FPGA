import csv
import math
import os
import random
import sys
from collections import namedtuple
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, FallingEdge
from cocotb.runner import get_runner
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

test_file = os.path.basename(__file__).replace(".py", "")

# ---- must match the RTL parameters / localparams ----
SIG_W = 14
GAIN_W = 32
FRAC = 16
PROD_W = SIG_W + 1 + GAIN_W            # RTL PROD_WIDTH (47)
ALPHA = 3                              # ALPHA_DIV_FACTOR
DFRAC = 5                              # DERIV_FRAC_BITS
DW = SIG_W + 2 + DFRAC                 # width of deriv_vel_filt (21)
OUT_MAX = (1 << (SIG_W - 1)) - 1
OUT_MIN = -(1 << (SIG_W - 1))
I_MAX = (OUT_MAX << FRAC) // 10
I_MIN = -I_MAX
D_ROUND_NEAREST = False                # set True after applying RTL fix 6

SAMPLE_PERIOD = 3                      # clk cycles per PID sample (>= 2 because busy toggles)
SINE_N = 64
PLOT_DIR = Path(__file__).resolve().parent / "plots"

Gains = namedtuple("Gains", "kp ki kd")


def q(x):
    return int(round(x * (1 << FRAC)))


def G(kp, ki, kd):
    """Real-valued gains -> raw Q16.16 integers."""
    return Gains(q(kp), q(ki), q(kd))


def to_signed(v, w):
    v &= (1 << w) - 1
    return v - (1 << w) if v >> (w - 1) else v


def wr(sig, val, w):
    sig.value = val & ((1 << w) - 1)


def sine(amp, n=SINE_N):
    return lambda k: int(round(amp * math.sin(2 * math.pi * k / n)))


# ---------------------------------------------------------------- reference model
class PidModel:
    """Bit-accurate model of pid_controller, advanced once per ACCEPTED sample."""

    def __init__(self):
        self.vel_d = 0
        self.dfilt = 0
        self.p_prod = self.i_prod = self.d_prod = 0
        self.i_cur = 0

    def step(self, ref, inp, g):
        vel = ref - inp
        dscaled = (vel - self.vel_d) << DFRAC
        # combinational logic works from the REGISTERED products of the previous sample
        pre = (self.p_prod >> FRAC) + (self.i_cur >> FRAC) + (self.d_prod >> FRAC)
        clamp = (pre > OUT_MAX and self.i_prod > 0) or (pre < OUT_MIN and self.i_prod < 0)
        nxt = self.i_cur + self.i_prod
        if clamp:            ib = self.i_cur
        elif nxt > I_MAX:    ib = I_MAX
        elif nxt < I_MIN:    ib = I_MIN
        else:                ib = nxt

        s = (self.p_prod >> FRAC) + (ib >> FRAC) + (self.d_prod >> FRAC)   # post-update integrator, as in RTL
        if s > OUT_MAX:
            out, hi, lo = OUT_MAX, 1, 0
        elif s < OUT_MIN:
            out, hi, lo = OUT_MIN, 0, 1
        else:
            out, hi, lo = s, 0, 0
        # register updates (all right-hand sides use the OLD state)
        if D_ROUND_NEAREST:
            dint = (self.dfilt + (1 << (DFRAC - 1))) >> DFRAC
        else:
            dint = self.dfilt >> DFRAC
        self.p_prod = to_signed(vel * g.kp, PROD_W)
        self.i_prod = to_signed(vel * g.ki, PROD_W)
        self.d_prod = to_signed(dint * g.kd, PROD_W)
        self.dfilt = to_signed(self.dfilt + ((dscaled - self.dfilt) >> ALPHA), DW)
        self.vel_d = vel
        self.i_cur = ib
        return dict(out=out, hi=hi, lo=lo, i_raw=ib)


# ---------------------------------------------------------------- DUT helpers
async def reset(dut):
    dut.rst.value = 1
    dut.data_valid_in.value = 0
    for s, w in ((dut.inp_sig, SIG_W), (dut.ref_sig, SIG_W),
                 (dut.Kp, GAIN_W), (dut.Ki, GAIN_W), (dut.Kd, GAIN_W)):
        wr(s, 0, w)
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    dut.rst.value = 0


async def init(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    await reset(dut)


def read(dut):
    return dict(
        out=to_signed(int(dut.out_sig.value), SIG_W),
        hi=int(dut.sat_hi.value),
        lo=int(dut.sat_lo.value),
        valid=int(dut.data_valid_out.value),
        busy=int(dut.busy.value),
        i_raw=to_signed(int(dut.i_current.value), PROD_W),
    )


def drive(dut, ref, inp, g):
    wr(dut.ref_sig, ref, SIG_W)
    wr(dut.inp_sig, inp, SIG_W)
    wr(dut.Kp, g.kp, GAIN_W)
    wr(dut.Ki, g.ki, GAIN_W)
    wr(dut.Kd, g.kd, GAIN_W)


async def step(dut, ref, inp, g):
    """One PID sample: 1-cycle request pulse, read after the accepting edge, then idle."""
    drive(dut, ref, inp, g)
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    rec = read(dut)
    for _ in range(SAMPLE_PERIOD - 1):
        await FallingEdge(dut.clk)
    return rec


def check_record(r, tag):
    k = r["k"]
    assert r["valid"] == 1 and r["busy"] == 1, f"{tag}[{k}]: valid/busy not high after accepted sample"
    assert not (r["hi"] and r["lo"]), f"{tag}[{k}]: sat_hi and sat_lo both set"
    if r["hi"]:
        assert r["out"] == OUT_MAX, f"{tag}[{k}]: sat_hi but out={r['out']}"
    if r["lo"]:
        assert r["out"] == OUT_MIN, f"{tag}[{k}]: sat_lo but out={r['out']}"
    assert I_MIN <= r["i_raw"] <= I_MAX, \
        f"{tag}[{k}]: integrator {r['i_raw']} outside [{I_MIN}, {I_MAX}] (windup)"


def mismatch(r):
    e = r["exp"]
    bad = [f"{f}: dut={r[f]} model={e[f]}" for f in ("out", "hi", "lo", "i_raw") if r[f] != e[f]]
    return ", ".join(bad)


def plot_profile(recs, name, g, markers=()):
    PLOT_DIR.mkdir(parents=True, exist_ok=True)
    fname = name.replace(" ", "_")
    with open(PLOT_DIR / f"{fname}.csv", "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["k", "ref", "inp", "out", "sat_hi", "sat_lo", "i_raw", "model_out", "model_i_raw"])
        for r in recs:
            w.writerow([r["k"], r["ref"], r["inp"], r["out"], r["hi"], r["lo"], r["i_raw"],
                        r["exp"]["out"], r["exp"]["i_raw"]])

    x = [r["k"] for r in recs]
    err = [r["ref"] - r["inp"] for r in recs]
    ideal, acc = [], 0
    for e in err:                      # unclamped integrator; state after sample k excludes e_k (one-sample lag)
        ideal.append(acc / 2 ** FRAC)
        acc += e * g(0).ki
    i_out = [r["i_raw"] / 2 ** FRAC for r in recs]
    clamp = I_MAX / 2 ** FRAC

    fig, ax = plt.subplots(4, 1, figsize=(11, 12), sharex=True, constrained_layout=True)
    ax[0].plot(x, [r["ref"] for r in recs], label="reference (DC)")
    ax[0].plot(x, [r["inp"] for r in recs], label="input (sine)")
    ax[0].set_ylabel("signal (input LSB)")
    ax[0].set_title(f"{name}: reference, input and integrator")
    twin = ax[0].twinx()
    twin.plot(x, i_out, color="green", lw=1.8, label="integrator (output LSB, right axis)")
    twin.axhline(clamp, color="green", ls=":", lw=1)
    twin.axhline(-clamp, color="green", ls=":", lw=1)
    twin.set_ylabel("integrator (output LSB)")
    h1, l1 = ax[0].get_legend_handles_labels()
    h2, l2 = twin.get_legend_handles_labels()
    ax[0].legend(h1 + h2, l1 + l2, loc="upper right")

    ax[1].plot(x, [r["out"] for r in recs], label="out_sig")
    sh = [i for i, r in enumerate(recs) if r["hi"]]
    sl = [i for i, r in enumerate(recs) if r["lo"]]
    ax[1].plot(sh, [OUT_MAX] * len(sh), "r.", ms=4, label="sat_hi")
    ax[1].plot(sl, [OUT_MIN] * len(sl), "m.", ms=4, label="sat_lo")
    ax[1].axhline(OUT_MAX, color="r", ls=":", lw=1)
    ax[1].axhline(OUT_MIN, color="r", ls=":", lw=1)
    ax[1].set_title("output command")
    ax[1].legend(loc="upper right")

    ax[2].plot(x, i_out, label="integrator (DUT)")
    ax[2].plot(x, ideal, "--", alpha=0.6, label="ideal unclamped integrator")
    ax[2].axhline(clamp, color="r", ls=":", lw=1, label="±I_MAX")
    ax[2].axhline(-clamp, color="r", ls=":", lw=1)
    lim = max(3 * clamp, 1)
    ax[2].set_ylim(-lim, lim)
    ax[2].set_title("integrator contribution (output LSBs); with windup it would follow the dashed line")
    ax[2].legend(loc="upper right")

    ax[3].plot(x, err)
    ax[3].set_title("error = ref - input")
    ax[3].set_xlabel("sample")
    for a in ax:
        a.grid(True, alpha=0.3)
        for m in markers:
            a.axvline(m, color="k", ls="--", lw=0.8)
    fig.savefig(PLOT_DIR / f"{fname}.png", dpi=110)
    plt.close(fig)


async def run_profile(dut, name, ref_fn, inp_fn, n, g, markers=(), plot=True):
    """Run n samples; compare every one to the model; plot BEFORE asserting so failures leave a plot."""
    gf = g if callable(g) else (lambda k: g)
    model = PidModel()
    recs, first_bad = [], None
    for k in range(n):
        ref, inp = ref_fn(k), inp_fn(k)
        r = await step(dut, ref, inp, gf(k))
        r.update(k=k, ref=ref, inp=inp, exp=model.step(ref, inp, gf(k)))
        if first_bad is None and mismatch(r):
            first_bad = f"{name}[{k}]: {mismatch(r)}"
        recs.append(r)
    if plot:
        plot_profile(recs, name, gf, markers)
    for r in recs:
        check_record(r, name)
    assert first_bad is None, f"first model mismatch -> {first_bad}"
    return recs

def plot_overlay(results, fname, g):
    """Integrator (top) and command (bottom) for several scenarios on shared axes."""
    PLOT_DIR.mkdir(parents=True, exist_ok=True)
    fig, ax = plt.subplots(2, 1, figsize=(11, 8), sharex=True, constrained_layout=True)
    clamp = I_MAX / 2 ** FRAC
    for label, recs in results.items():
        x = [r["k"] for r in recs]
        ax[0].plot(x, [r["i_raw"] / 2 ** FRAC for r in recs], label=label)
        ax[1].plot(x, [r["out"] for r in recs], label=label)
    ax[0].axhline(clamp, color="r", ls=":", label="±I_MAX")
    ax[0].axhline(-clamp, color="r", ls=":")
    ax[0].set_title("integrator over time (output LSB), flat DC reference vs sinusoidal input")
    ax[1].axhline(OUT_MAX, color="r", ls=":")
    ax[1].axhline(OUT_MIN, color="r", ls=":")
    ax[1].set_title("output command")
    ax[1].set_xlabel("sample")
    for a in ax:
        a.grid(True, alpha=0.3)
        a.legend(loc="upper right", fontsize=8)
    fig.savefig(PLOT_DIR / f"{fname}.png", dpi=110)
    plt.close(fig)


@cocotb.test()
async def test_sine_vs_dc_integrator_plots(dut):
    """Flat DC reference at several levels vs a sine input: plots integrator/command, checks it never winds up."""
    await init(dut)
    amp, g, n = 2000, G(0.05, 0.02, 0.0), 6 * SINE_N
    cases = {"ref 0 (zero-mean error)": 0, "ref +500": 500, "ref -500": -500, "ref +1500": 1500}
    results = {}
    for label, ref in cases.items():
        await reset(dut)
        results[label] = await run_profile(dut, f"pid sine vs dc {ref:+d}",
                                           lambda k, r=ref: r, sine(amp), n, g)
    plot_overlay(results, "pid_integrator_overlay", g)       # saved even if a check below fails

    peak0 = max(abs(r["i_raw"]) for r in results["ref 0 (zero-mean error)"])
    assert 0 < peak0 < I_MAX, "zero-mean case should oscillate without reaching the clamp"
    assert max(r["i_raw"] for r in results["ref +500"]) == I_MAX, "+500 offset never pinned at I_MAX"
    assert min(r["i_raw"] for r in results["ref -500"]) == I_MIN, "-500 offset never pinned at I_MIN"

# ---------------------------------------------------------------- tests
@cocotb.test()
async def test_reset(dut):
    """Everything is zero after reset with no input."""
    await init(dut)
    for _ in range(20):
        await FallingEdge(dut.clk)
        r = read(dut)
        assert r["valid"] == 0 and r["busy"] == 0
        assert r["out"] == 0 and r["hi"] == 0 and r["lo"] == 0 and r["i_raw"] == 0


@cocotb.test()
async def test_busy_handshake(dut):
    """valid_in held high: accepts every other cycle, requests during busy are ignored."""
    await init(dut)
    g = G(1.0, 0.02, 0.2)
    model, rng = PidModel(), random.Random(3)
    last, n_acc = 0, 0
    for k in range(40):
        ref, inp = rng.randint(-3000, 3000), rng.randint(-3000, 3000)
        drive(dut, ref, inp, g)
        dut.data_valid_in.value = 1
        await FallingEdge(dut.clk)
        r = read(dut)
        if r["valid"]:
            assert not last, "two samples accepted back to back (busy did not block)"
            assert r["busy"] == 1, "busy not high with valid_out"
            exp = model.step(ref, inp, g)
            for f in ("out", "hi", "lo", "i_raw"):
                assert r[f] == exp[f], f"cycle {k}: {f} dut={r[f]} model={exp[f]}"
            n_acc += 1
        else:
            assert r["busy"] == 0, "busy high without valid_out"
        last = r["valid"]
    dut.data_valid_in.value = 0
    assert n_acc == 20, f"expected 20 accepted samples in 40 cycles, got {n_acc}"


@cocotb.test()
async def test_zero_error(dut):
    """ref == input -> zero output, zero integrator."""
    await init(dut)
    recs = await run_profile(dut, "pid zero error", lambda k: 1000, lambda k: 1000, 30, G(1.0, 0.05, 0.5))
    assert all(r["out"] == 0 and r["i_raw"] == 0 for r in recs)


@cocotb.test()
async def test_p_only(dut):
    """Kp=1, Ki=Kd=0: out[k] equals the PREVIOUS sample's error (the design's one-sample lag), clamped."""
    await init(dut)
    recs = await run_profile(dut, "pid p only",
                             lambda k: 2000 if k < 15 else -2000, lambda k: 0, 40, G(1.0, 0, 0), markers=(15,))
    for k, r in enumerate(recs):
        prev = 0 if k == 0 else recs[k - 1]["ref"] - recs[k - 1]["inp"]
        assert r["out"] == max(OUT_MIN, min(OUT_MAX, prev)), f"k={k}: out={r['out']}, expected {prev}"


@cocotb.test()
async def test_integrator_ramp_and_clamp(dut):
    """Ki only, constant error: i_current[k] = sum(vel*Ki) until it pins at I_MAX."""
    await init(dut)
    g = G(0, 0.01, 0)
    recs = await run_profile(dut, "pid integrator ramp", lambda k: 1000, lambda k: 0, 120, g)
    for k, r in enumerate(recs):
        exp = min(k * 1000 * g.ki, I_MAX)
        assert r["i_raw"] == exp, f"k={k}: integrator {r['i_raw']}, expected {exp}"
        assert r["out"] == r["i_raw"] >> FRAC and not r["hi"] and not r["lo"]
    assert recs[-1]["i_raw"] == I_MAX, "integrator never reached the clamp"


@cocotb.test()
async def test_derivative_settles(dut):
    """Kd only: a step in error gives a D pulse of the right sign, and D returns to 0 afterwards.
    (Fails for the negative step until RTL fix 6 is applied.)"""
    await init(dut)
    fails = []
    for sign in (+1, -1):
        await reset(dut)
        recs = await run_profile(dut, f"pid deriv step {'pos' if sign > 0 else 'neg'}",
                                 lambda k: sign * 800 if k >= 10 else 0, lambda k: 0, 150,
                                 G(0, 0, 1.0), markers=(10,))
        peak = max(recs, key=lambda r: abs(r["out"]))["out"]
        assert peak * sign >= 50, f"no D response to a {sign:+d} step (peak {peak})"
        if recs[-1]["out"] != 0:
            fails.append(f"sign {sign:+d}: D term stuck at {recs[-1]['out']} output LSB after 140 flat samples")
    assert not fails, "; ".join(fails)


@cocotb.test()
async def test_sine_input_dc_reference(dut):
    """ref = 0 (DC), sinusoidal input. Integrator must equal sum(vel*Ki) exactly, oscillate, and not drift."""
    await init(dut)
    amp, g = 2000, G(0.05, 0.01, 0.2)
    n = 8 * SINE_N
    recs = await run_profile(dut, "pid sine dc ref", lambda k: 0, sine(amp), n, g)
    acc = 0
    for k, r in enumerate(recs):
        assert r["i_raw"] == acc, f"k={k}: integrator {r['i_raw']} != running sum {acc}"
        acc += (r["ref"] - r["inp"]) * g.ki
    tol = g.ki * SINE_N                       # one period of rounding residue
    for p in range(1, 8):
        v = recs[p * SINE_N]["i_raw"]
        assert abs(v) <= tol, f"integrator drifted: {v} at end of period {p} (tol {tol})"
    peak = max(abs(r["i_raw"]) for r in recs)
    assert peak > 0.5 * g.ki * amp * SINE_N / math.pi, "integrator barely moved; is Ki wired up?"
    assert peak < I_MAX, "this test should not reach the clamp"


@cocotb.test()
async def test_windup_and_recovery(dut):
    """
    Phase A: DC reference far above the sine -> error always positive. Integrator must pin at I_MAX.
    Phase B: reference flips below the sine -> integrator must unwind in a bounded number of samples
    (an unclamped integrator would need about as long as it spent winding up).
    """
    await init(dut)
    g = G(0.05, 0.02, 0.0)
    na, nb = 300, 120
    recs = await run_profile(dut, "pid windup recovery",
                             lambda k: 3000 if k < na else -3000, sine(2000), na + nb, g, markers=(na,))
    a = [r["i_raw"] for r in recs[:na]]
    assert max(a) == I_MAX, f"integrator never pinned at I_MAX ({max(a)} vs {I_MAX})"
    min_err_b = min(abs(r["ref"] - r["inp"]) for r in recs[na:])
    bound = math.ceil(I_MAX / (g.ki * min_err_b)) + 3
    idx = next((j for j, r in enumerate(recs[na:]) if r["i_raw"] <= 0), None)
    assert idx is not None, "integrator never unwound after the error changed sign"
    assert idx <= bound, f"slow unwind: {idx} samples, worst-case bound {bound}"
    assert idx < na // 4, f"unwind took {idx} samples vs {na} to wind up: looks like windup"
    dut._log.info(f"integrator pinned at I_MAX, then unwound in {idx} samples (bound {bound})")


@cocotb.test()
async def test_output_saturation_antiwindup(dut):
    """Output saturates both ways; flags match; integrator freezes while saturated (conditional integration)."""
    await init(dut)
    recs = await run_profile(dut, "pid saturation sine", lambda k: 0, sine(6000), 4 * SINE_N, G(100.0, 0.02, 0.0))
    assert any(r["hi"] for r in recs) and any(r["lo"] for r in recs), "never saturated both ways"
    assert any(not r["hi"] and not r["lo"] for r in recs), "never left saturation"

    await reset(dut)
    recs = await run_profile(dut, "pid saturation freeze", lambda k: 3000, lambda k: 0, 40, G(10.0, 0.02, 0.0))
    for r in recs[1:]:
        assert r["hi"] == 1 and r["out"] == OUT_MAX, f"k={r['k']}: expected saturated high"
        assert r["i_raw"] == 0, f"k={r['k']}: integrator grew to {r['i_raw']} while output saturated"


@cocotb.test()
async def test_random_vs_model(dut):
    """Random walk / jumps on ref and input, gains changing every 100 samples; bit-exact against the model."""
    await init(dut)
    rng = random.Random(1234)
    n = 2000
    ref_s, inp_s, gains = [], [], []
    r, i = 0, 0
    g = G(0, 0, 0)
    for k in range(n):
        if k % 100 == 0:
            g = Gains(*[rng.choice([0, rng.randint(-(1 << 18), 1 << 18), rng.randint(-(1 << 31), (1 << 31) - 1)])
                        for _ in range(3)])
        if rng.random() < 0.05:
            r, i = rng.randint(OUT_MIN, OUT_MAX), rng.randint(OUT_MIN, OUT_MAX)
        r = max(OUT_MIN, min(OUT_MAX, r + rng.randint(-200, 200)))
        i = max(OUT_MIN, min(OUT_MAX, i + rng.randint(-200, 200)))
        ref_s.append(r); inp_s.append(i); gains.append(g)
    await run_profile(dut, "pid random", lambda k: ref_s[k], lambda k: inp_s[k], n, lambda k: gains[k], plot=False)


def pid_runner():
    sim = os.getenv("SIM", "verilator")
    proj_path = Path(__file__).resolve().parent.parent
    sources = [proj_path / "hdl" / "pid_controller.sv"]
    build_test_args = ["--Wall", "-Wno-fatal", "--timing", "--trace", "--public-flat-rw"]
    parameters = {"GAIN_DATA_WIDTH": GAIN_W, "SIG_DATA_WIDTH": SIG_W, "FRAC_WIDTH": FRAC}
    sys.path.append(str(proj_path / "sim"))
    hdl_toplevel = "pid_controller"
    runner = get_runner(sim)
    runner.build(sources=sources, hdl_toplevel=hdl_toplevel, always=True,
                 build_args=build_test_args, parameters=parameters,
                 timescale=("1ns", "1ps"), waves=True)
    runner.test(hdl_toplevel=hdl_toplevel, test_module=test_file, test_args=[], waves=True)


if __name__ == "__main__":
    pid_runner()
