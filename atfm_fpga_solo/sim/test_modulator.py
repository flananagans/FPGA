import csv
import cocotb
import os
import sys
import math
import random
from pathlib import Path
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, FallingEdge
from cocotb.runner import get_runner
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

test_file = os.path.basename(__file__).replace(".py", "")

# Must match the parameters passed to the runner below
W = 16
NH = 10
OUT_SHIFT = W - 1            # modulator_sum_out = sum >> OUT_SHIFT
CORDIC_ERR = 10              # worst-case CORDIC error in LSB on a full-scale term
EXPECTED_LATENCY = None      # set to an int once you know it; None = only check consistency
MAX_COEF = (1 << (W - 1)) // (2 * NH) - 1   # |a|,|b| <= this => sum can't overflow
PLOT_DIR = Path(__file__).resolve().parent / "plots"
TOL = 16
HARM_TOL = TOL

def to_signed(v, w=W):
    v &= (1 << w) - 1
    return v - (1 << w) if v >> (w - 1) else v


def pack(vals, w=W):
    """List of signed ints -> packed integer, element 0 in the LSBs."""
    r = 0
    for i, v in enumerate(vals):
        r |= (v & ((1 << w) - 1)) << (w * i)
    return r


def model(angle, a, b):
    """Ideal (floating point) modulator output, in output LSBs, and the tolerance for it."""
    total = 0.0
    for n in range(1, NH + 1):
        theta = to_signed(n * angle) * 2 * math.pi / 2 ** W
        total += a[n - 1] * math.cos(theta) + b[n - 1] * math.sin(theta)
    scale = 2.0 ** (W - 1 - OUT_SHIFT)
    exp = total * scale
    mag = sum(abs(x) for x in a) + sum(abs(x) for x in b)
    tol = math.ceil(CORDIC_ERR * mag * scale / 2 ** (W - 1)) + 2 * NH + 2
    return exp, tol

def harmonic_model(angle):
    """Ideal (cos, sin) lists for harmonics 1..NH, in Q1.(W-1) LSBs, clamped like the hardware."""
    cs, sn = [], []
    hi, lo = 2 ** (W - 1) - 1, -(2 ** (W - 1))
    for n in range(1, NH + 1):
        theta = to_signed(n * angle) * 2 * math.pi / 2 ** W
        cs.append(max(min(round(math.cos(theta) * 2 ** (W - 1)), hi), lo))
        sn.append(max(min(round(math.sin(theta) * 2 ** (W - 1)), hi), lo))
    return cs, sn

def rand_coefs(maxc=MAX_COEF):
    return ([random.randint(-maxc, maxc) for _ in range(NH)],
            [random.randint(-maxc, maxc) for _ in range(NH)])


def check_result(got, angle, a, b, tag=""):
    exp, tol = model(angle, a, b)
    assert abs(got - exp) <= tol, \
        f"{tag}: angle={angle}, got {got}, expected {exp:.1f} (tol {tol})"
    return got - exp


async def init(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.rst.value = 1
    dut.data_valid_in.value = 0
    dut.angle.value = 0
    dut.a_values.value = 0
    dut.b_values.value = 0
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    dut.rst.value = 0


async def wait_not_busy(dut, timeout=500):
    for _ in range(timeout):
        await FallingEdge(dut.clk)
        if int(dut.busy.value) == 0:
            return
    raise AssertionError("busy never went low")


async def run_one(dut, angle, a, b, timeout=500, tag="run_one", check=True):
    """
    Wait for idle, send one request as a 1-cycle pulse, wait for data_valid_out.
    Returns (latency_in_cycles, pulses_seen, output).
    """
    await wait_not_busy(dut)               # we are on a falling edge here
    dut.angle.value = angle
    dut.a_values.value = pack(a)
    dut.b_values.value = pack(b)
    dut.data_valid_in.value = 1
    latency, pulses, out = None, 0, None
    for cycle in range(1, timeout):
        await FallingEdge(dut.clk)
        dut.data_valid_in.value = 0
        if int(dut.data_valid_out.value) == 1:
            pulses += 1
            if latency is None:
                latency = cycle
                out = to_signed(int(dut.modulator_sum_out.value))
                if check:
                    check_result(out, angle, a, b, tag)
        elif latency is not None:
            break                           # pulse ended
    assert latency is not None, f"{tag}: no data_valid_out for angle {angle}"
    return latency, pulses, out


@cocotb.test()
async def test_reset(dut):
    """valid_out and busy are low after reset with no input."""
    await init(dut)
    for _ in range(60):
        await FallingEdge(dut.clk)
        assert int(dut.data_valid_out.value) == 0, "valid_out high with no input"
        assert int(dut.busy.value) == 0, "busy high with no input"


@cocotb.test()
async def test_single_coefficients(dut):
    """One coefficient at a time: isolates harmonic ordering and the sin/cos split."""
    await init(dut)
    A = 1000
    for n in range(1, NH + 1):
        for use_sin in (False, True):
            a, b = [0] * NH, [0] * NH
            (b if use_sin else a)[n - 1] = A
            angle = random.Random(n).randint(-(1 << (W - 1)), (1 << (W - 1)) - 1)
            _, pulses, out = await run_one(
                dut, angle, a, b, tag=f"{'sin' if use_sin else 'cos'} harmonic {n}")
            assert pulses == 1


@cocotb.test()
async def test_zero_and_dc(dut):
    """All-zero coefficients -> 0.  a1 only at angle 0 -> ~a1 (cos(0)=1)."""
    await init(dut)
    _, _, out = await run_one(dut, 12345, [0] * NH, [0] * NH, tag="zeros")
    assert abs(out) <= 2, f"zero coefficients gave {out}"
    a = [0] * NH
    a[0] = 700
    await run_one(dut, 0, a, [0] * NH, tag="cos(0)")


@cocotb.test()
async def test_latency_and_pulse(dut):
    """Latency is consistent across requests and the valid pulse is one cycle wide."""
    await init(dut)
    random.seed(5)
    lats = set()
    for ang in (0, 1 << (W - 3), -(1 << (W - 2)), 777):
        a, b = rand_coefs()
        lat, pulses, _ = await run_one(dut, ang, a, b, tag="latency")
        assert pulses == 1, f"valid_out was high for {pulses} cycles"
        lats.add(lat)
    dut._log.info(f"measured latency (cycles from drive to valid_out): {sorted(lats)}")
    assert len(lats) == 1, f"latency not constant: {sorted(lats)}"
    if EXPECTED_LATENCY is not None:
        assert lats == {EXPECTED_LATENCY}, f"latency {lats}, expected {EXPECTED_LATENCY}"


@cocotb.test()
async def test_directed_angles(dut):
    """Corner angles with random coefficients."""
    await init(dut)
    random.seed(11)
    angles = [0, 1 << (W - 2), -(1 << (W - 2)), -(1 << (W - 1)),
              (1 << (W - 1)) - 1, 1 << (W - 3), -(1 << (W - 3)), 12345, -9876]
    for ang in angles:
        a, b = rand_coefs()
        await run_one(dut, ang, a, b, tag="directed")


@cocotb.test()
async def test_random(dut):
    """Random angles and coefficients (full coefficient range that cannot overflow)."""
    await init(dut)
    random.seed(1234)
    for k in range(100):
        ang = random.randint(-(1 << (W - 1)), (1 << (W - 1)) - 1)
        a, b = rand_coefs(random.choice([10, 100, MAX_COEF]))
        await run_one(dut, ang, a, b, tag=f"random #{k}")
        await ClockCycles(dut.clk, random.randint(0, 3))


@cocotb.test()
async def test_ignore_while_busy(dut):
    """A request made while busy is ignored; only the first result appears."""
    await init(dut)
    random.seed(7)
    a1, b1 = rand_coefs()
    a2, b2 = rand_coefs()
    first, second = 5000, -20000
    await FallingEdge(dut.clk)
    dut.angle.value, dut.a_values.value, dut.b_values.value = first, pack(a1), pack(b1)
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    # wait until busy is observed, then hit it with a second request
    for _ in range(20):
        if int(dut.busy.value) == 1:
            break
        await FallingEdge(dut.clk)
    assert int(dut.busy.value) == 1, "busy never asserted after a request"
    dut.angle.value, dut.a_values.value, dut.b_values.value = second, pack(a2), pack(b2)
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    pulses = 0
    for _ in range(300):
        await FallingEdge(dut.clk)
        if int(dut.data_valid_out.value) == 1:
            pulses += 1
            check_result(to_signed(int(dut.modulator_sum_out.value)), first, a1, b1, "busy test")
    assert pulses == 1, f"expected 1 result, saw {pulses}"


@cocotb.test()
async def test_inputs_latched(dut):
    """Inputs change right after the request pulse; result must still match the original.
    (Delete this test if your module is specified to need inputs held until valid_out.)"""
    await init(dut)
    random.seed(21)
    a, b = rand_coefs()
    ang = 4321
    await FallingEdge(dut.clk)
    dut.angle.value, dut.a_values.value, dut.b_values.value = ang, pack(a), pack(b)
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    dut.angle.value = 31000
    dut.a_values.value = pack([MAX_COEF] * NH)
    dut.b_values.value = pack([-MAX_COEF] * NH)
    for _ in range(300):
        await FallingEdge(dut.clk)
        if int(dut.data_valid_out.value) == 1:
            check_result(to_signed(int(dut.modulator_sum_out.value)), ang, a, b, "latched")
            return
    raise AssertionError("no valid_out")


@cocotb.test()
async def test_reset_flushes(dut):
    """Reset mid-computation: no valid_out afterwards, and busy clears."""
    await init(dut)
    a, b = rand_coefs()
    await FallingEdge(dut.clk)
    dut.angle.value, dut.a_values.value, dut.b_values.value = 1000, pack(a), pack(b)
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    await ClockCycles(dut.clk, 6)
    await FallingEdge(dut.clk)
    dut.rst.value = 1
    await ClockCycles(dut.clk, 2)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    for _ in range(100):
        await FallingEdge(dut.clk)
        assert int(dut.data_valid_out.value) == 0, "stale valid after reset"
        assert int(dut.busy.value) == 0, "busy stuck after reset"
    # and it still works afterwards
    await run_one(dut, 2000, a, b, tag="after reset")


async def sweep(dut, angles, a, b, tag):
    """Run a list of angles one at a time with fixed coefficients; save CSV + plot."""
    rows = []
    for k, ang in enumerate(angles):
        _, _, out = await run_one(dut, ang, a, b, tag=tag, check=False)
        exp, tol = model(ang, a, b)
        rows.append((k, ang, exp, out, tol))
    PLOT_DIR.mkdir(parents=True, exist_ok=True)
    name = tag.replace(" ", "_")
    with open(PLOT_DIR / f"{name}.csv", "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["sample", "angle", "expected", "received", "tol"])
        w.writerows(rows)
    x = [r[0] for r in rows]
    exp = [r[2] for r in rows]
    got = [r[3] for r in rows]
    tol = rows[0][4]
    fig, ax = plt.subplots(3, 1, figsize=(10, 9), constrained_layout=True, sharex=True)
    ax[0].plot(x, [r[1] for r in rows], ".-", ms=3)
    ax[0].set_title(f"{tag}: input angle")
    ax[1].plot(x, exp, "-", label="expected")
    ax[1].plot(x, got, "--", label="received")
    ax[1].set_title("modulator output")
    ax[1].legend()
    ax[2].plot(x, [g - e for g, e in zip(got, exp)])
    ax[2].axhline(tol, color="r", ls=":")
    ax[2].axhline(-tol, color="r", ls=":")
    ax[2].set_title(f"error (received - expected), tol ±{tol}")
    ax[2].set_xlabel("sample")
    for a_ in ax:
        a_.grid(True, alpha=0.3)
    fig.savefig(PLOT_DIR / f"{name}.png", dpi=110)
    plt.close(fig)
    worst = max(abs(r[3] - r[2]) for r in rows)
    dut._log.info(f"{tag}: worst error {worst:.1f} LSB (tol {tol}); wrote {name}.csv/.png")
    assert worst <= tol, f"{tag}: worst error {worst:.1f} > tol {tol}"


@cocotb.test()
async def test_sawtooth_sweep(dut):
    """Fixed coefficients, angle ramps through -180..+180: output is a waveform you can see."""
    await init(dut)
    random.seed(3)
    a, b = rand_coefs()
    step = (1 << W) // 128
    angles = [to_signed(-(1 << (W - 1)) + k * step) for k in range(128)]
    await sweep(dut, angles, a, b, "modulator sawtooth")


@cocotb.test()
async def test_square_wave_synthesis(dut):
    """Classic check: odd-harmonic sine series (b_n = A/n) approximates a square wave."""
    await init(dut)
    A = MAX_COEF
    a = [0] * NH
    b = [(A // n) if n % 2 == 1 else 0 for n in range(1, NH + 1)]
    step = (1 << W) // 128
    angles = [to_signed(-(1 << (W - 1)) + k * step) for k in range(128)]
    await sweep(dut, angles, a, b, "modulator square")

def read_internal(dut, sig):
    """Unpack an internal packed [NH-1:0][W-1:0] bus into a list of signed ints."""
    raw = int(sig.value)
    return [to_signed(raw >> (W * i)) for i in range(NH)]


@cocotb.test()
async def test_modulator_matches_harmonics(dut):
    """a = b = 1: modulator output must equal floor((sum cos + sum sin) / 2^(W-1))
    computed from the harmonic generator's own outputs (bit-exact)."""
    await init(dut)
    ones = [1] * NH
    angles = [0, 1 << (W - 2), -(1 << (W - 2)), -(1 << (W - 1)),
              (1 << (W - 1)) - 1, 1 << (W - 3), 12345, -9876]
    random.seed(77)
    angles += [random.randint(-(1 << (W - 1)), (1 << (W - 1)) - 1) for _ in range(40)]

    for ang in angles:
        await wait_not_busy(dut)
        dut.angle.value = ang
        dut.a_values.value = pack(ones)
        dut.b_values.value = pack(ones)
        dut.data_valid_in.value = 1
        await FallingEdge(dut.clk)
        dut.data_valid_in.value = 0

        for _ in range(300):
            await FallingEdge(dut.clk)
            if int(dut.data_valid_out.value) == 1:
                break
        else:
            raise AssertionError(f"no data_valid_out for angle {ang}")

        # harmonic generator results as latched by the modulator for this request
        cos_h = read_internal(dut, dut.cos_harmonics)
        sin_h = read_internal(dut, dut.sin_harmonics)
        expected_exact = (sum(cos_h) + sum(sin_h)) >> (W - 1)   # floor, like >>>
        got = to_signed(int(dut.modulator_sum_out.value))
        assert got == expected_exact, \
            f"angle={ang}: modulator={got}, from harmonics={expected_exact} " \
            f"(sum cos={sum(cos_h)}, sum sin={sum(sin_h)})"

        # sanity: the harmonic values themselves are close to the ideal model
        exp_c, exp_s = harmonic_model(ang)
        for i in range(NH):
            # print(f"{cos_h[i]} - {exp_c[i]} = {cos_h[i] - exp_c[i]}") # max diff of 9 LSBs
            assert abs(cos_h[i] - exp_c[i]) <= HARM_TOL, f"cos harmonic {i+1}, angle={ang}"
            assert abs(sin_h[i] - exp_s[i]) <= HARM_TOL, f"sin harmonic {i+1}, angle={ang}"

def harmonic_modulator_runner():
    sim = os.getenv("SIM", "verilator")
    proj_path = Path(__file__).resolve().parent.parent
    sys.path.append(str(proj_path / "sim" / "model"))
    sources = [proj_path / "hdl" / "cordic_cossin.sv",
               proj_path / "hdl" / "harmonic_generator.sv",
               proj_path / "hdl" / "modulator.sv"]
    build_test_args = ["--Wall", "-Wno-fatal", "--timing", "--trace", "--public-flat-rw"]
    parameters = {"DATA_WIDTH": W, "MAX_HARMONIC": NH}
    sys.path.append(str(proj_path / "sim"))
    hdl_toplevel = "modulator"
    runner = get_runner(sim)
    runner.build(
        sources=sources,
        hdl_toplevel=hdl_toplevel,
        always=True,
        build_args=build_test_args,
        parameters=parameters,
        timescale=("1ns", "1ps"),
        waves=True,
    )
    runner.test(hdl_toplevel=hdl_toplevel, test_module=test_file,
                test_args=[], waves=True)


if __name__ == "__main__":
    harmonic_modulator_runner()