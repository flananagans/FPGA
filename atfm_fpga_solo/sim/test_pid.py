"""
cocotb testbench for pid_controller.

What it tests (every sample is also compared bit-for-bit against PidModel):

  1. Term scaling, OPEN loop (feedback held at 0, so error = a sine you choose)
       - Kp only          -> output is a sine, amplitude proportional to Kp
       - Ki only (cosine) -> output is a sine, amplitude proportional to Ki (Ki 2x -> amplitude 2x)
       - Kd only          -> output is a (filtered) cosine, amplitude proportional to Kd
  2. Step responses, CLOSED loop, with a mass-spring-damper plant standing in for the PSoC:
         x[i+1] = A x[i] + B u[i]      (A, B built from m, b, k)
         u = out_cmd * (5 Nm / 2^(SIG_W-1))   -> command spans -5 .. +5 Nm
       P, PD, PI, PID. The command must never saturate (saturation makes the loop nonlinear).
  3. Integrator windup: the plant ignores the command for a while (error stays large, the integrator
     grows to its clamp), then the command is allowed to act again and we look at the step response.
  4. Saturation: a deliberately huge step, to see the sat flags and the clamped integrator.

Plots go to ./plots/ (see the plot_* functions for what each one shows).
"""
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
import numpy as np

test_file = os.path.basename(__file__).replace(".py", "")

# ---- must match the RTL parameters / localparams ----
SIG_W = 12
GAIN_W = 16
FRAC = 7
PROD_W = SIG_W + 1 + GAIN_W            # RTL PROD_WIDTH
ALPHA = 3                              # ALPHA_DIV_FACTOR (derivative low-pass: alpha = 2**-3)
DFRAC = 5                              # DERIV_FRAC_BITS
DW = SIG_W + 3 + DFRAC                 # width of deriv_vel_filt
OUT_MAX = (1 << (SIG_W - 1)) - 1
OUT_MIN = -(1 << (SIG_W - 1))
I_MAX = (OUT_MAX << FRAC) // 10
I_MIN = -I_MAX
D_ROUND_NEAREST = True                # set True after applying the D-path rounding RTL fix

GAIN_RAW_MAX = (1 << (GAIN_W - 1)) - 1
GAIN_RAW_MIN = -(1 << (GAIN_W - 1))
GAIN_REAL_MAX = GAIN_RAW_MAX / 2 ** FRAC       # largest gain the port can carry
ALPHA_GAIN = 2.0 ** -ALPHA                     # D low-pass: fraction of a 1-sample jump seen after 1 sample
MIN_RAW_NONZERO = 4

# ---- DUT port names (taken from the previous testbench; edit here if the .sv differs) ----
PORT_REF, PORT_INP, PORT_OUT, PORT_I = "des_state", "inp_state", "out_cmd", "i_current"

SAMPLE_PERIOD = 3                      # clk cycles per PID sample (>= 2 because busy toggles)
SINE_N = 64                            # samples per sine period in the open-loop tests
PLOT_DIR = Path(__file__).resolve().parent / "plots"

# ---- physical scaling / plant (replace with the PSoC's m, b, k and Ts) ----
TS = 1.0e-3                            # controller/plant sample period [s]
PLANT_M, PLANT_B, PLANT_K = 0.02, 0.2, 2.0      # J [kg m^2], b [N m s/rad], k [N m/rad]
COUNTS_PER_UNIT = 1000.0               # state counts per rad (1 count = 1 mrad)
T_MAX_NM = 5.0                         # full-scale command: +/- 5 Nm
NM_PER_COUNT = T_MAX_NM / (1 << (SIG_W - 1))
I_MAX_NM = I_MAX / 2 ** FRAC * NM_PER_COUNT      # integrator authority in Nm

# ---- scenario definitions ----
# STEP_AT, STEP_VAL, N_STEP = 50, 200, 1500        # 200 counts = 0.2 rad step at sample 50
# BLACKOUT, N_BLACKOUT = (50, 400), 2500           # plant ignores command for samples 50..399
# N_SAT, SAT_STEP = 1500, 800
# GMAX = (1 << (GAIN_W-1)) - 1
LINEAR_LIMIT = 0.95 * OUT_MAX                  # peak command allowed in the "linear" tests
CMD_BUDGET   = 0.80 * OUT_MAX                  # what the gain design aims for (headroom for quantisation)
P_SHARE, D_SHARE = 0.5, 0.3                    # fraction of CMD_BUDGET used by P and by the D kick on sample 1
TI_SAMPLES   = 64                              # Ki = Kp / TI_SAMPLES

STEP_AT, N_STEP = 50, 1500
STEP_VAL = max(1, round(0.10 * OUT_MAX))       # 10 % of full scale (205 counts for 12 bit)
BLACKOUT, N_BLACKOUT = (50, 400), 2500

SAT_AT_FRAC   = 0.40                           # saturation step = 40 % of full scale
SAT_STEP      = round(SAT_AT_FRAC * OUT_MAX)
SAT_OVERDRIVE = 2.5                            # first command = 2.5 x full scale
N_SAT = 1500

Gains = namedtuple("Gains", "kp ki kd")

def q(x):
    """Real gain (output counts per input count) -> raw integer, with a range check."""
    raw = int(round(x * (1 << FRAC)))
    assert GAIN_RAW_MIN <= raw <= GAIN_RAW_MAX, (
        f"gain {x:g} -> raw {raw} does not fit GAIN_W={GAIN_W} signed bits at FRAC={FRAC} "
        f"(max gain {GAIN_REAL_MAX:g}). Raise GAIN_W (need >= {abs(raw).bit_length() + 1}), "
        f"lower FRAC, or raise STEP_VAL.")
    return raw


def G(kp, ki, kd):
    return Gains(q(kp), q(ki), q(kd))


def first_sample_cmd(g, step):
    """Worst-case command (counts) just after a setpoint step of `step` counts.
    P sees the full step, D sees ALPHA_GAIN*step (filtered kick), I adds one increment."""
    kp, ki, kd = (v / 2 ** FRAC for v in g)
    return step * (abs(kp) + abs(kd) * ALPHA_GAIN + abs(ki))


def design_gains(step=STEP_VAL):
    kp = P_SHARE * CMD_BUDGET / step
    kd = D_SHARE * CMD_BUDGET / (step * ALPHA_GAIN)
    ki = kp / TI_SAMPLES
    return kp, ki, kd


def _cl(use_i, use_d):
    kp, ki, kd = design_gains()
    return G(kp, ki if use_i else 0.0, kd if use_d else 0.0)


CL_GAINS = {
    "P":   _cl(False, False),
    "PD":  _cl(False, True),
    "PI":  _cl(True,  False),
    "PID": _cl(True,  True),
}


def _check_design():
    for name, g in CL_GAINS.items():
        pk = first_sample_cmd(g, STEP_VAL)
        assert pk <= LINEAR_LIMIT, (f"{name}: first command ~{pk:.0f} counts > {LINEAR_LIMIT:.0f}; "
                                    f"lower P_SHARE/D_SHARE or the step")
        for f in g._fields:
            raw = getattr(g, f)
            assert raw == 0 or abs(raw) >= MIN_RAW_NONZERO, (
                f"{name}.{f} = {raw} raw is too coarse at FRAC={FRAC}; raise FRAC or lower TI_SAMPLES")
    # the integrator must be able to hold the plant against its spring, or PI can't remove the offset
    hold_nm = PLANT_K * STEP_VAL / COUNTS_PER_UNIT
    assert I_MAX_NM > hold_nm, f"integrator authority {I_MAX_NM:.3f} Nm < holding torque {hold_nm:.3f} Nm"


_check_design()      # must come after I_MAX_NM is defined (it's in the physical-scaling block)


# saturation gains: first command = SAT_OVERDRIVE * full scale
_sat_kp = SAT_OVERDRIVE * OUT_MAX / SAT_STEP
SAT_GAINS = G(_sat_kp, _sat_kp / TI_SAMPLES, 0.0)

TERM_CASES = {                                   # open-loop sweeps: gains double each time
    "P": dict(gains=[0.5, 1.0, 2.0],     amp=400,  cos=False),
    "I": dict(gains=[2 / (1 << FRAC), 4 / (1 << FRAC), 8 / (1 << FRAC)], amp=250, cos=True),
    "D": dict(gains=[2.5, 5, 10],   amp=1600, cos=False),
}


def to_signed(v, w):
    v &= (1 << w) - 1
    return v - (1 << w) if v >> (w - 1) else v


def wr(sig, val, w):
    assert -(1 << (w-1)) <= val < (1 << (w-1)), f"{sig._name}: {val} doesn't fit in {w} bits"
    sig.value = val & ((1 << w) - 1)



def wave(amp, cos=False, n=SINE_N):
    f = math.cos if cos else math.sin
    return lambda k: int(round(amp * f(2 * math.pi * k / n)))


def step_ref(val=STEP_VAL, at=STEP_AT):
    return lambda k: val if k >= at else 0


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
        return dict(out=out, hi=hi, lo=lo, i_raw=ib, clamp=int(clamp), pre=pre)


# ---------------------------------------------------------------- plant model (stands in for the PSoC)
def _expm(M, terms=24):
    s = max(0, int(math.ceil(math.log2(max(np.linalg.norm(M, 1), 1e-12)))) + 1)
    X = M / 2 ** s
    E = T = np.eye(len(M))
    for n in range(1, terms):
        T = T @ X / n
        E = E + T
    for _ in range(s):
        E = E @ E
    return E


class Plant:
    """m x'' + b x' + k x = u, exact zero-order-hold discretisation: x[i+1] = A x[i] + B u[i]."""

    def __init__(self, m=PLANT_M, b=PLANT_B, k=PLANT_K, ts=TS):
        M = np.zeros((3, 3))
        M[0, 1] = 1.0
        M[1, 0], M[1, 1], M[1, 2] = -k / m, -b / m, 1.0 / m
        E = _expm(M * ts)
        self.A, self.B = E[:2, :2], E[:2, 2:]
        self.x = np.zeros((2, 1))

    def step(self, u_nm):
        self.x = self.A @ self.x + self.B * u_nm

    def counts(self):
        c = int(math.floor(self.x[0, 0] * COUNTS_PER_UNIT + 0.5))
        return max(OUT_MIN, min(OUT_MAX, c))


# ---------------------------------------------------------------- analytic expectations (open loop)
_TH = 2 * math.pi / SINE_N
_A = 2.0 ** -ALPHA
_H_LPF = _A / math.hypot(1 - (1 - _A) * math.cos(_TH), (1 - _A) * math.sin(_TH))


def expected_amp(kind, gain, amp):
    """Expected output amplitude (counts) for a sine/cosine error of amplitude `amp`."""
    if kind == "P":
        return gain * amp
    if kind == "I":      # sum of cos = sin / (2 sin(th/2))
        return gain * amp / (2 * math.sin(_TH / 2))
    return gain * amp * 2 * math.sin(_TH / 2) * _H_LPF     # D: difference, then 1st-order low-pass


# ---------------------------------------------------------------- DUT helpers
async def reset(dut):
    dut.rst.value = 1
    dut.data_valid_in.value = 0
    for s, w in ((getattr(dut, PORT_INP), SIG_W), (getattr(dut, PORT_REF), SIG_W),
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
        out=to_signed(int(getattr(dut, PORT_OUT).value), SIG_W),
        hi=int(dut.sat_hi.value),
        lo=int(dut.sat_lo.value),
        valid=int(dut.data_valid_out.value),
        busy=int(dut.busy.value),
        i_raw=to_signed(int(getattr(dut, PORT_I).value), PROD_W),
    )


def drive(dut, ref, inp, g):
    wr(getattr(dut, PORT_REF), ref, SIG_W)
    wr(getattr(dut, PORT_INP), inp, SIG_W)
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


def n_saturated(recs):
    return sum(1 for r in recs if r["hi"] or r["lo"])


def assert_linear(recs, tag):
    n = n_saturated(recs)
    assert n == 0, f"{tag}: command saturated on {n} samples, so the loop is no longer linear; lower the gains/step"


def write_csv(recs, name):
    PLOT_DIR.mkdir(parents=True, exist_ok=True)
    with open(PLOT_DIR / f"{name.replace(' ', '_')}.csv", "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["k", "t_s", "ref", "inp", "out", "out_nm", "sat_hi", "sat_lo", "i_raw", "model_out", "model_i_raw"])
        for r in recs:
            w.writerow([r["k"], r["k"] * TS, r["ref"], r["inp"], r["out"], r["out"] * NM_PER_COUNT,
                        r["hi"], r["lo"], r["i_raw"], r["exp"]["out"], r["exp"]["i_raw"]])


async def run_profile(dut, name, ref_fn, n, g, inp_fn=lambda k: 0, plant=None, blackout=None, plot=None):
    """
    Run n samples and compare every one to the model.
      open loop  (plant=None): input = inp_fn(k)
      closed loop (plant=Plant()): input = plant position; plant is driven by out_cmd in Nm.
                   blackout=(a, b): for a <= k < b the plant sees u = 0 (it ignores the command).
    `plot(recs)` is called BEFORE the assertions so a failing run still leaves a plot.
    """
    gf = g if callable(g) else (lambda k: g)
    model = PidModel()
    recs, first_bad = [], None
    for k in range(n):
        ref = ref_fn(k)
        inp = plant.counts() if plant is not None else inp_fn(k)
        r = await step(dut, ref, inp, gf(k))
        r.update(k=k, ref=ref, inp=inp, exp=model.step(ref, inp, gf(k)))
        if plant is not None:
            ignored = blackout is not None and blackout[0] <= k < blackout[1]
            plant.step(0.0 if ignored else r["out"] * NM_PER_COUNT)
        if first_bad is None and mismatch(r):
            first_bad = f"{name}[{k}]: {mismatch(r)}"
        recs.append(r)
    # write_csv(recs, name)
    if plot:
        plot(recs)
    for r in recs:
        check_record(r, name)
    assert first_bad is None, f"first model mismatch -> {first_bad}"
    return recs


# ---------------------------------------------------------------- metrics
def step_metrics(recs):
    target = recs[-1]["ref"]
    x = [r["inp"] for r in recs]
    return dict(
        overshoot=100.0 * (max(x) - target) / target,           # % of the step
        final_err=target - sum(x[-100:]) / 100.0,               # counts, mean of last 100 samples
        peak_nm=max(abs(r["out"]) for r in recs) * NM_PER_COUNT,
    )


# ---------------------------------------------------------------- plots
def _save(fig, name):
    PLOT_DIR.mkdir(parents=True, exist_ok=True)
    fig.savefig(PLOT_DIR / f"{name}.png", dpi=110)
    plt.close(fig)


def _shade(axes, blackout):
    if blackout:
        for a in axes:
            a.axvspan(blackout[0] * TS * 1e3, blackout[1] * TS * 1e3, color="orange", alpha=0.18)


def plot_term_sweep(kind, res, case):
    """
    3 panels.  (1) the sine we feed in as the error.  (2) the controller output for each gain.
    (3) measured output amplitude vs gain, against the analytic expectation: the points must sit on the
    line, and each doubling of the gain must double the amplitude.
    """
    label = {"P": "Kp", "I": "Ki", "D": "Kd"}[kind]
    fig, ax = plt.subplots(3, 1, figsize=(10, 11), constrained_layout=True)
    first = next(iter(res.values()))["recs"]
    ax[0].plot([r["k"] for r in first], [r["ref"] - r["inp"] for r in first], "k")
    ax[0].set_title("1) Error fed to the controller (reference minus 0 feedback)")
    ax[0].set_ylabel("counts")
    for gain, d in res.items():
        ax[1].plot([r["k"] for r in d["recs"]], [r["out"] for r in d["recs"]], label=f"{label} = {gain:g}")
    ax[1].set_title(f"2) Output command, {label} only (other gains = 0): should be a sine, bigger for bigger {label}")
    ax[1].set_ylabel("output counts")
    ax[1].set_xlabel("sample")
    ax[1].legend(loc="upper right")
    gains = list(res)
    ax[2].plot(gains, [d["exp"] for d in res.values()], "b-o", label="expected (analytic)")
    ax[2].plot(gains, [d["amp"] for d in res.values()], "rx", ms=11, mew=2, label="measured (DUT)")
    ax[2].set_title(f"3) Output amplitude vs {label}: points on the line = linear in {label}")
    ax[2].set_xlabel(label)
    ax[2].set_ylabel("amplitude (counts)")
    ax[2].legend()
    for a in ax:
        a.grid(True, alpha=0.3)
    fig.suptitle(f"Open-loop {kind} term check")
    _save(fig, f"term_{kind}")


def plot_step(recs, name, g, blackout=None):
    """
    3 panels, all in physical units.  (1) Did the plant reach the target?  (2) What command went back to
    the plant, and did it hit the +/-5 Nm limit (red x = saturated -> loop is nonlinear)?
    (3) How much of the command is the integrator, and is it pinned at its clamp (dotted)?
    Orange band = plant was ignoring the command.
    """
    t = [r["k"] * TS * 1e3 for r in recs]
    fig, ax = plt.subplots(3, 1, figsize=(11, 10), sharex=True, constrained_layout=True)
    ax[0].plot(t, [r["ref"] / COUNTS_PER_UNIT for r in recs], "k--", label="desired state")
    ax[0].plot(t, [r["inp"] / COUNTS_PER_UNIT for r in recs], "b", label="plant state (fed back)")
    ax[0].set_ylabel("state (rad)")
    ax[0].set_title("1) Step response: does the state reach the desired value?")
    ax[1].plot(t, [r["out"] * NM_PER_COUNT for r in recs], "r", label="command to plant")
    sat = [r for r in recs if r["hi"] or r["lo"]]
    ax[1].plot([r["k"] * TS * 1e3 for r in sat], [r["out"] * NM_PER_COUNT for r in sat], "kx", ms=5,
               label=f"saturated ({len(sat)} samples)")
    ax[1].axhline(T_MAX_NM, color="gray", ls=":")
    ax[1].axhline(-T_MAX_NM, color="gray", ls=":")
    ax[1].set_ylabel("command (Nm)")
    ax[1].set_title("2) Controller command: must stay inside +/-5 Nm for the loop to be linear")
    ax[2].plot(t, [r["i_raw"] / 2 ** FRAC * NM_PER_COUNT for r in recs], "g", label="integrator term")
    ax[2].axhline(I_MAX_NM, color="gray", ls=":", label="integrator clamp")
    ax[2].axhline(-I_MAX_NM, color="gray", ls=":")
    ax[2].set_ylabel("integrator (Nm)")
    ax[2].set_xlabel("time (ms)")
    ax[2].set_title("3) Integrator contribution to the command")
    _shade(ax, blackout)
    if blackout:
        ax[0].text(blackout[0] * TS * 1e3, ax[0].get_ylim()[1] * 0.92, "  plant ignores command", color="darkorange")
    for a in ax:
        a.grid(True, alpha=0.3)
        a.legend(loc="upper right", fontsize=8)
    fig.suptitle(f"{name}   (Kp={g.kp / 2**FRAC:g}, Ki={g.ki / 2**FRAC:g}, Kd={g.kd / 2**FRAC:g})")
    _save(fig, name.replace(" ", "_"))


def plot_windup_compare(base, blk):
    """Same PI controller, same step; blue = normal, red = plant ignored the command for a while."""
    fig, ax = plt.subplots(2, 1, figsize=(11, 8), sharex=True, constrained_layout=True)
    for label, recs, c in (("normal", base, "tab:blue"), ("command blackout", blk, "tab:red")):
        t = [r["k"] * TS * 1e3 for r in recs]
        ax[0].plot(t, [r["inp"] / COUNTS_PER_UNIT for r in recs], c, label=label)
        ax[1].plot(t, [r["i_raw"] / 2 ** FRAC * NM_PER_COUNT for r in recs], c, label=label)
    ax[0].plot(t, [r["ref"] / COUNTS_PER_UNIT for r in blk], "k--", label="desired state")
    ax[1].axhline(I_MAX_NM, color="gray", ls=":", label="integrator clamp")
    ax[0].set_ylabel("state (rad)")
    ax[0].set_title("State: after the blackout the wound-up integrator causes extra overshoot")
    ax[1].set_ylabel("integrator (Nm)")
    ax[1].set_xlabel("time (ms)")
    ax[1].set_title("Integrator: red climbs to its clamp while the plant ignores the command")
    _shade(ax, BLACKOUT)
    for a in ax:
        a.grid(True, alpha=0.3)
        a.legend(loc="upper right", fontsize=8)
    _save(fig, "windup_compare")


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
        ref, inp = rng.randint(OUT_MIN, OUT_MAX), rng.randint(OUT_MIN, OUT_MAX)
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


async def run_term_sweep(dut, kind):
    case = TERM_CASES[kind]
    n = 6 * SINE_N
    res = {}
    for gain in case["gains"]:
        await reset(dut)
        g = {"P": G(gain, 0, 0), "I": G(0, gain, 0), "D": G(0, 0, gain)}[kind]
        recs = await run_profile(dut, f"pid term {kind} gain {gain:g}", wave(case["amp"], case["cos"]), n, g)
        out = [r["out"] for r in recs[3 * SINE_N:]]          # last 3 periods (filters/transients settled)
        res[gain] = dict(recs=recs, amp=(max(out) - min(out)) / 2.0, mean=sum(out) / len(out),
                         exp=expected_amp(kind, gain, case["amp"]))
    plot_term_sweep(kind, res, case)                          # plot before asserting
    for gain, d in res.items():
        assert_linear(d["recs"], f"{kind} gain {gain:g}")
        tol = 0.03 * d["exp"] + 2
        assert abs(d["amp"] - d["exp"]) <= tol, \
            f"{kind} gain {gain:g}: measured amplitude {d['amp']:.1f}, expected {d['exp']:.1f} (+/-{tol:.1f})"
    amps = [d["amp"] for d in res.values()]
    for a0, a1 in zip(amps, amps[1:]):
        assert abs(a1 / a0 - 2.0) < 0.06, f"doubling {kind} gain should double the amplitude, got x{a1 / a0:.3f}"
    return res


@cocotb.test()
async def test_p_only_sine(dut):
    """Ki = Kd = 0: output is a sine with amplitude Kp * A; doubling Kp doubles it."""
    await init(dut)
    await run_term_sweep(dut, "P")


@cocotb.test()
async def test_i_only_sine(dut):
    """Kp = Kd = 0, cosine error: integral is a sine with amplitude Ki*A/(2 sin(th/2)); doubling Ki doubles it."""
    await init(dut)
    await run_term_sweep(dut, "I")


@cocotb.test()
async def test_d_only_sine(dut):
    """Kp = Ki = 0: output is the low-pass-filtered derivative; amplitude proportional to Kd."""
    await init(dut)
    res = await run_term_sweep(dut, "D")
    for gain, d in res.items():
        # a mean away from 0 is the D-path floor bias (the thing D_ROUND_NEAREST / the RTL rounding fix removes)
        dut._log.info(f"D gain {gain:g}: output mean {d['mean']:+.1f} counts (ideal 0)")


@cocotb.test()
async def test_closed_loop_step_responses(dut):
    """P, PD, PI, PID step responses on the plant. Command must never saturate."""
    await init(dut)
    m = {}
    for name, g in CL_GAINS.items():
        await reset(dut)
        recs = await run_profile(dut, f"pid step {name}", step_ref(), N_STEP, g, plant=Plant(),
                                 plot=lambda r, n=f"pid step {name}", g=g: plot_step(r, n, g))
        assert_linear(recs, f"step {name}")
        m[name] = step_metrics(recs)
        dut._log.info(f"{name}: overshoot {m[name]['overshoot']:.1f}%  final error {m[name]['final_err']:.1f} counts"
                      f"  peak command {m[name]['peak_nm']:.2f} Nm")

    kp_nm_per_rad = CL_GAINS["P"].kp / 2 ** FRAC * NM_PER_COUNT * COUNTS_PER_UNIT
    exp_ss = STEP_VAL * PLANT_K / (PLANT_K + kp_nm_per_rad)
    assert abs(m["P"]["final_err"] - exp_ss) < 3, \
        f"P-only steady-state error {m['P']['final_err']:.1f}, expected about {exp_ss:.1f} counts"
    assert m["PI"]["final_err"] < 3 and m["PID"]["final_err"] < 3, "integrator should remove the steady-state error"
    assert m["PD"]["overshoot"] < m["P"]["overshoot"], "D should add damping (less overshoot than P)"
    assert m["PID"]["overshoot"] < m["PI"]["overshoot"], "D should add damping (less overshoot than PI)"


@cocotb.test()
async def test_integrator_windup_blackout(dut):
    """
    Plant ignores the command for samples 50..399 so the error stays at the step size and the integrator
    grows linearly to its clamp. When the plant listens again, the stored integrator causes extra overshoot
    versus the same PI loop without a blackout, and the loop still settles.
    """
    await init(dut)
    g = CL_GAINS["PI"]
    base = await run_profile(dut, "pid windup baseline", step_ref(), N_BLACKOUT, g, plant=Plant())
    await reset(dut)
    blk = await run_profile(dut, "pid windup blackout", step_ref(), N_BLACKOUT, g, plant=Plant(),
                            blackout=BLACKOUT, plot=lambda r: plot_step(r, "pid windup blackout", g, BLACKOUT))
    plot_windup_compare(base, blk)
    assert_linear(base, "windup baseline")
    assert_linear(blk, "windup blackout")

    hit = next((r["k"] for r in blk if r["i_raw"] >= I_MAX), None)
    assert hit is not None, "integrator never reached its clamp during the blackout"
    exp_hit = STEP_AT + 1 + math.ceil(I_MAX / (g.ki * STEP_VAL))
    assert abs(hit - exp_hit) <= 3, f"integrator hit the clamp at sample {hit}, expected about {exp_hit}"
    assert all(r["i_raw"] == I_MAX for r in blk[hit:BLACKOUT[1]]), "integrator left the clamp during the blackout"

    mb, mn = step_metrics(blk), step_metrics(base)
    dut._log.info(f"overshoot: baseline {mn['overshoot']:.1f}%, after blackout {mb['overshoot']:.1f}%")
    assert mb["overshoot"] > mn["overshoot"] + 2, "blackout should leave extra overshoot from the stored integrator"
    assert mb["final_err"] < 0.05 * STEP_VAL, f"loop did not recover after the blackout (error {mb['final_err']:.1f})"


@cocotb.test()
async def test_saturation_is_flagged(dut):
    """Huge step with high Kp: the command pins at +/-5 Nm (the loop is nonlinear); flags and clamp must hold."""
    await init(dut)
    recs = await run_profile(dut, "pid saturation", step_ref(SAT_STEP), N_SAT, SAT_GAINS, plant=Plant(),
                             plot=lambda r: plot_step(r, "pid saturation", SAT_GAINS))
    assert any(r["hi"] for r in recs), "expected sat_hi to assert on the large positive step"
    assert all(r["out"] == OUT_MAX for r in recs if r["hi"])
    dut._log.info(f"command saturated on {n_saturated(recs)} samples")


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
            g = Gains(*[rng.choice([0, rng.randint(-GMAX//64, GMAX//64), rng.randint(-GMAX-1, GMAX)]) for _ in range(3)])
        if rng.random() < 0.05:
            r, i = rng.randint(OUT_MIN, OUT_MAX), rng.randint(OUT_MIN, OUT_MAX)
        r = max(OUT_MIN, min(OUT_MAX, r + rng.randint(-200, 200)))
        i = max(OUT_MIN, min(OUT_MAX, i + rng.randint(-200, 200)))
        ref_s.append(r); inp_s.append(i); gains.append(g)
    await run_profile(dut, "pid random", lambda k: ref_s[k], n, lambda k: gains[k], inp_fn=lambda k: inp_s[k])


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
