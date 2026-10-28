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
OUT_SHIFT = W - 1                    # modulator_sum_out = sum >>> OUT_SHIFT
MAX_COEF = (1 << (W - 1)) // (2 * NH) - 1   # |a|,|b| <= this => ideal-input sum can't overflow
EXPECTED_LATENCY = NH + 4            # 1 BUFFER + (NH + 2) MAC + 1 DONE
PLOT_DIR = Path(__file__).resolve().parent / "plots"


def to_signed(v, w=W):
    v &= (1 << w) - 1
    return v - (1 << w) if v >> (w - 1) else v


def pack(vals, w=W):
    """List of signed ints -> packed integer, element 0 in the LSBs."""
    r = 0
    for i, v in enumerate(vals):
        r |= (v & ((1 << w) - 1)) << (w * i)
    return r


def harmonic_model(angle):
    """Ideal (cos, sin) lists for harmonics 1..NH in Q1.(W-1), clamped like the hardware."""
    cs, sn = [], []
    hi, lo = 2 ** (W - 1) - 1, -(2 ** (W - 1))
    for n in range(1, NH + 1):
        theta = to_signed(n * angle) * 2 * math.pi / 2 ** W
        cs.append(max(min(round(math.cos(theta) * 2 ** (W - 1)), hi), lo))
        sn.append(max(min(round(math.sin(theta) * 2 ** (W - 1)), hi), lo))
    return cs, sn


def exact_model(a, b, c, s):
    """Bit-exact expected output for arbitrary a, b, cos, sin lists."""
    total = sum(a[i] * c[i] + b[i] * s[i] for i in range(NH))
    return to_signed(total >> OUT_SHIFT)       # Python >> on ints is floor, like >>>


def ideal_model(angle, a, b):
    """Floating-point expected output for the ideal harmonics, plus a tight tolerance."""
    total = 0.0
    for n in range(1, NH + 1):
        theta = to_signed(n * angle) * 2 * math.pi / 2 ** W
        total += a[n - 1] * math.cos(theta) + b[n - 1] * math.sin(theta)
    mag = sum(abs(x) for x in a) + sum(abs(x) for x in b)
    # floor in >>> (<1 LSB) + 0.5 LSB rounding of each driven cos/sin scaled by its coefficient
    tol = math.ceil(0.5 * mag / 2 ** (W - 1)) + 1
    return total, tol


def rand_coefs(maxc=MAX_COEF):
    return ([random.randint(-maxc, maxc) for _ in range(NH)],
            [random.randint(-maxc, maxc) for _ in range(NH)])


def rand_word():
    return random.randint(-(1 << (W - 1)), (1 << (W - 1)) - 1)


def drive(dut, a, b, c, s):
    dut.a_values.value = pack(a)
    dut.b_values.value = pack(b)
    dut.cos_harmonics.value = pack(c)
    dut.sin_harmonics.value = pack(s)


async def init(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.rst.value = 1
    dut.data_valid_in.value = 0
    drive(dut, [0] * NH, [0] * NH, [0] * NH, [0] * NH)
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    dut.rst.value = 0


async def wait_not_busy(dut, timeout=500):
    for _ in range(timeout):
        await FallingEdge(dut.clk)
        if int(dut.busy.value) == 0:
            return
    raise AssertionError("busy never went low")


async def run_one(dut, a, b, c, s, timeout=200):
    """
    Wait for idle, send one request as a 1-cycle pulse, wait for data_valid_out.
    Returns (latency_in_cycles, pulses_seen, output). Does not check the value.
    """
    await wait_not_busy(dut)               # we are on a falling edge here
    drive(dut, a, b, c, s)
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
        elif latency is not None:
            break                           # pulse ended
    assert latency is not None, "no data_valid_out"
    return latency, pulses, out


async def run_exact(dut, a, b, c, s, tag=""):
    lat, pulses, out = await run_one(dut, a, b, c, s)
    exp = exact_model(a, b, c, s)
    assert out == exp, f"{tag}: got {out}, expected {exp}"
    assert pulses == 1, f"{tag}: valid_out high for {pulses} cycles"
    return lat


async def run_ideal(dut, angle, a, b, tag=""):
    c, s = harmonic_model(angle)
    lat, pulses, out = await run_one(dut, a, b, c, s)
    exp, tol = ideal_model(angle, a, b)
    assert abs(out - exp) <= tol, f"{tag}: angle={angle}, got {out}, expected {exp:.1f} (tol {tol})"
    assert pulses == 1
    return out


@cocotb.test()
async def test_reset(dut):
    """valid_out and busy are low after reset with no input."""
    await init(dut)
    for _ in range(60):
        await FallingEdge(dut.clk)
        assert int(dut.data_valid_out.value) == 0, "valid_out high with no input"
        assert int(dut.busy.value) == 0, "busy high with no input"


@cocotb.test()
async def test_latency_and_pulse(dut):
    """Constant latency, one-cycle valid pulse, busy high exactly while working."""
    await init(dut)
    random.seed(5)
    lats = set()
    for _ in range(5):
        a, b = rand_coefs()
        c, s = harmonic_model(random.randint(-(1 << (W - 1)), (1 << (W - 1)) - 1))
        lat, pulses, _ = await run_one(dut, a, b, c, s)
        assert pulses == 1, f"valid_out was high for {pulses} cycles"
        lats.add(lat)
    dut._log.info(f"measured latency (cycles from drive to valid_out): {sorted(lats)}")
    assert lats == {EXPECTED_LATENCY}, f"latency {sorted(lats)}, expected {EXPECTED_LATENCY}"


@cocotb.test()
async def test_busy_window(dut):
    """busy rises right after the request and falls with data_valid_out."""
    await init(dut)
    a, b = rand_coefs()
    c, s = harmonic_model(1234)
    await FallingEdge(dut.clk)
    drive(dut, a, b, c, s)
    dut.data_valid_in.value = 1
    busy_cycles = 0
    for cycle in range(1, 60):
        await FallingEdge(dut.clk)
        dut.data_valid_in.value = 0
        if int(dut.data_valid_out.value) == 1:
            assert int(dut.busy.value) == 0, "busy still high when valid_out rises"
            break
        assert int(dut.busy.value) == 1, f"busy low at cycle {cycle} while computing"
        busy_cycles += 1
    assert busy_cycles == EXPECTED_LATENCY - 1


@cocotb.test()
async def test_zero_and_dc(dut):
    """All-zero coefficients -> 0. a1 only with cos=full scale -> ~a1."""
    await init(dut)
    c, s = harmonic_model(12345)
    await run_exact(dut, [0] * NH, [0] * NH, c, s, tag="zeros")
    a = [0] * NH
    a[0] = 700
    c, s = harmonic_model(0)
    out = await run_ideal(dut, 0, a, [0] * NH, tag="cos(0)")
    assert abs(out - 700) <= 1


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
            await run_ideal(dut, angle, a, b, tag=f"{'sin' if use_sin else 'cos'} harmonic {n}")


@cocotb.test()
async def test_bit_exact_random(dut):
    """Random full-range a, b, cos, sin (including wrap of the final 16-bit output): must match exactly."""
    await init(dut)
    random.seed(1234)
    for k in range(200):
        a = [rand_word() for _ in range(NH)]
        b = [rand_word() for _ in range(NH)]
        c = [rand_word() for _ in range(NH)]
        s = [rand_word() for _ in range(NH)]
        await run_exact(dut, a, b, c, s, tag=f"exact #{k}")
        await ClockCycles(dut.clk, random.randint(0, 3))


@cocotb.test()
async def test_extremes(dut):
    """Max/min values everywhere: checks signed multiply and accumulator width."""
    await init(dut)
    hi, lo = (1 << (W - 1)) - 1, -(1 << (W - 1))
    for av, bv, cv, sv in [(hi, hi, hi, hi), (lo, lo, lo, lo), (lo, hi, lo, hi),
                           (hi, lo, hi, lo), (lo, lo, hi, hi)]:
        await run_exact(dut, [av] * NH, [bv] * NH, [cv] * NH, [sv] * NH, tag="extreme")


@cocotb.test()
async def test_directed_angles(dut):
    """Corner angles with ideal harmonics and random coefficients."""
    await init(dut)
    random.seed(11)
    angles = [0, 1 << (W - 2), -(1 << (W - 2)), -(1 << (W - 1)),
              (1 << (W - 1)) - 1, 1 << (W - 3), -(1 << (W - 3)), 12345, -9876]
    for ang in angles:
        a, b = rand_coefs()
        await run_ideal(dut, ang, a, b, tag="directed")


@cocotb.test()
async def test_ignore_while_busy(dut):
    """A request made while busy is ignored; only the first result appears."""
    await init(dut)
    random.seed(7)
    a1, b1 = rand_coefs()
    c1, s1 = harmonic_model(5000)
    a2, b2 = rand_coefs()
    c2, s2 = harmonic_model(-20000)

    await FallingEdge(dut.clk)
    drive(dut, a1, b1, c1, s1)
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    assert int(dut.busy.value) == 1, "busy not asserted after a request"
    drive(dut, a2, b2, c2, s2)
    dut.data_valid_in.value = 1            # second request while busy
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0

    pulses = 0
    for _ in range(100):
        await FallingEdge(dut.clk)
        if int(dut.data_valid_out.value) == 1:
            pulses += 1
            got = to_signed(int(dut.modulator_sum_out.value))
            assert got == exact_model(a1, b1, c1, s1), "result is not from the first request"
    assert pulses == 1, f"expected 1 result, saw {pulses}"


@cocotb.test()
async def test_inputs_latched(dut):
    """All four input buses change right after the request pulse; result must match the originals."""
    await init(dut)
    random.seed(21)
    a, b = rand_coefs()
    c, s = harmonic_model(4321)
    await FallingEdge(dut.clk)
    drive(dut, a, b, c, s)
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    drive(dut, [MAX_COEF] * NH, [-MAX_COEF] * NH, [31000] * NH, [-31000] * NH)
    for _ in range(100):
        await FallingEdge(dut.clk)
        if int(dut.data_valid_out.value) == 1:
            got = to_signed(int(dut.modulator_sum_out.value))
            assert got == exact_model(a, b, c, s), f"got {got}"
            return
    raise AssertionError("no valid_out")


@cocotb.test()
async def test_back_to_back(dut):
    """Request again immediately after valid_out; no state leaks between results."""
    await init(dut)
    random.seed(31)
    for k in range(20):
        a = [rand_word() for _ in range(NH)]
        b = [rand_word() for _ in range(NH)]
        c = [rand_word() for _ in range(NH)]
        s = [rand_word() for _ in range(NH)]
        await run_exact(dut, a, b, c, s, tag=f"b2b #{k}")


@cocotb.test()
async def test_reset_flushes(dut):
    """Reset mid-computation: no valid_out afterwards, busy clears, and it still works."""
    await init(dut)
    a, b = rand_coefs()
    c, s = harmonic_model(1000)
    await FallingEdge(dut.clk)
    drive(dut, a, b, c, s)
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    await ClockCycles(dut.clk, 6)
    await FallingEdge(dut.clk)
    dut.rst.value = 1
    await ClockCycles(dut.clk, 2)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    for _ in range(40):
        await FallingEdge(dut.clk)
        assert int(dut.data_valid_out.value) == 0, "stale valid after reset"
        assert int(dut.busy.value) == 0, "busy stuck after reset"
    await run_exact(dut, a, b, c, s, tag="after reset")


async def sweep(dut, angles, a, b, tag):
    """Run angles one at a time with fixed coefficients and ideal harmonics; save CSV + plot."""
    rows = []
    for k, ang in enumerate(angles):
        c, s = harmonic_model(ang)
        _, _, out = await run_one(dut, a, b, c, s)
        exp, tol = ideal_model(ang, a, b)
        assert out == exact_model(a, b, c, s), f"{tag}: sample {k} not bit-exact"
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
    dut._log.info(f"{tag}: worst error {worst:.2f} LSB (tol {tol}); wrote {name}.csv/.png")
    assert worst <= tol, f"{tag}: worst error {worst:.2f} > tol {tol}"


@cocotb.test()
async def test_sawtooth_sweep(dut):
    """Fixed random coefficients; angle ramps through -180..+180."""
    await init(dut)
    random.seed(3)
    a, b = rand_coefs()
    step = (1 << W) // 128
    angles = [to_signed(-(1 << (W - 1)) + k * step) for k in range(128)]
    await sweep(dut, angles, a, b, "modulator sawtooth")


@cocotb.test()
async def test_square_wave_synthesis(dut):
    """Odd-harmonic sine series (b_n = A/n) approximates a square wave."""
    await init(dut)
    A = MAX_COEF
    a = [0] * NH
    b = [(A // n) if n % 2 == 1 else 0 for n in range(1, NH + 1)]
    step = (1 << W) // 128
    angles = [to_signed(-(1 << (W - 1)) + k * step) for k in range(128)]
    await sweep(dut, angles, a, b, "modulator square")


def modulator_runner():
    sim = os.getenv("SIM", "verilator")
    proj_path = Path(__file__).resolve().parent.parent
    sys.path.append(str(proj_path / "sim" / "model"))
    sources = [proj_path / "hdl" / "modulator.sv"]
    build_test_args = ["--Wall", "-Wno-fatal", "--timing", "--trace"]
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
    modulator_runner()
