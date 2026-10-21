import cocotb
import os
import sys
import math
import random
from collections import deque
from pathlib import Path
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, FallingEdge
from cocotb.runner import get_runner

import csv
import matplotlib
matplotlib.use("Agg")            # headless-safe (no display needed on the VM)
import matplotlib.pyplot as plt

PLOT_DIR = Path(__file__).resolve().parent / "plots"

test_file = os.path.basename(__file__).replace(".py", "")

# Must match the parameters passed to the runner below
W = 16
NH = 10
NITER = 16
LATENCY = NITER + 1   # falling edges from driving data_valid_in to seeing data_valid_out
TOL = 16                    # allowed error in LSBs; tighten after seeing real numbers

'''
abs(got - expected) <= TOL (in output LSBs)
1 output LSB = 1/2^15 = 1/32768 = 3.05e-5
TOL = 164 LSB --> TOL = 0.005 within correct angle
seems to pass for TOL = 16  => 4.8e-4
worst error for sawtooths is 11 LSB
'''

def to_signed(v, w=W):
    v &= (1 << w) - 1
    return v - (1 << w) if v >> (w - 1) else v


def model(angle):
    """Expected (cos, sin) lists for harmonics 1..NH of a signed W-bit angle."""
    cs, sn = [], []
    hi, lo = 2 ** (W - 1) - 1, -(2 ** (W - 1))
    for n in range(1, NH + 1):
        a = to_signed(n * angle)
        theta = a * 2 * math.pi / 2 ** W
        cs.append(max(min(round(math.cos(theta) * 2 ** (W - 1)), hi), lo))
        sn.append(max(min(round(math.sin(theta) * 2 ** (W - 1)), hi), lo))
    return cs, sn


def read_outputs(dut):
    """Unpack packed [NH-1:0][W-1:0] buses; element 0 is in the LSBs."""
    c_raw, s_raw = int(dut.cos_arr_out.value), int(dut.sin_arr_out.value)
    cs = [to_signed(c_raw >> (W * i)) for i in range(NH)]
    sn = [to_signed(s_raw >> (W * i)) for i in range(NH)]
    return cs, sn


def check(dut, angle, tag=""):
    exp_c, exp_s = model(angle)
    got_c, got_s = read_outputs(dut)
    worst = 0
    for i in range(NH):
        ec, es = abs(got_c[i] - exp_c[i]), abs(got_s[i] - exp_s[i])
        worst = max(worst, ec, es)
        assert ec <= TOL, f"{tag} cos harmonic {i+1}, angle={angle}: got {got_c[i]}, expected {exp_c[i]}"
        assert es <= TOL, f"{tag} sin harmonic {i+1}, angle={angle}: got {got_s[i]}, expected {exp_s[i]}"
    return worst


async def init(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.rst.value = 1
    dut.data_valid_in.value = 0
    dut.angle.value = 0
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    dut.rst.value = 0


async def run_one(dut, angle, timeout=LATENCY + 20):
    """Send one angle as a 1-cycle pulse. Returns (latency_in_cycles, pulse_count seen)."""
    await FallingEdge(dut.clk)
    dut.angle.value = angle
    dut.data_valid_in.value = 1
    latency = None
    pulses = 0
    for cycle in range(1, timeout):
        await FallingEdge(dut.clk)
        dut.data_valid_in.value = 0
        if int(dut.data_valid_out.value) == 1:
            pulses += 1
            if latency is None:
                latency = cycle
                check(dut, angle, tag="run_one")
    return latency, pulses

def save_and_plot(records, tag, harmonics=(1, NH), outdir=PLOT_DIR):
    """
    records: list of dicts with keys
        angle, got_c, got_s, exp_c, exp_s   (the last four are lists of length NH)
    Writes <tag>.csv with every harmonic, and <tag>.png for the chosen harmonics.
    """
    outdir.mkdir(parents=True, exist_ok=True)
    name = tag.replace(" ", "_")

    # CSV: one row per sample, columns for all harmonics
    header = ["sample", "angle"]
    for n in range(1, NH + 1):
        header += [f"exp_cos_{n}", f"got_cos_{n}", f"exp_sin_{n}", f"got_sin_{n}"]
    with open(outdir / f"{name}.csv", "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(header)
        for k, r in enumerate(records):
            row = [k, r["angle"]]
            for i in range(NH):
                row += [r["exp_c"][i], r["got_c"][i], r["exp_s"][i], r["got_s"][i]]
            w.writerow(row)

    # Plot
    x = list(range(len(records)))
    cols = len(harmonics)
    fig = plt.figure(figsize=(5.5 * cols, 11), constrained_layout=True)
    gs = fig.add_gridspec(4, cols, height_ratios=[1, 2, 2, 1.5])

    ax = fig.add_subplot(gs[0, :])
    ax.plot(x, [r["angle"] for r in records], ".-", ms=3)
    ax.set_title(f"{tag}: input angle (signed {W}-bit)")
    ax.set_ylabel("angle (LSB)")
    ax.grid(True, alpha=0.3)

    for c, n in enumerate(harmonics):
        i = n - 1
        exp_c = [r["exp_c"][i] for r in records]
        got_c = [r["got_c"][i] for r in records]
        exp_s = [r["exp_s"][i] for r in records]
        got_s = [r["got_s"][i] for r in records]

        a1 = fig.add_subplot(gs[1, c])
        a1.plot(x, exp_c, "-", label="expected")
        a1.plot(x, got_c, "--", label="received")
        a1.set_title(f"cos, harmonic {n}")
        a1.grid(True, alpha=0.3)
        a1.legend(loc="upper right")

        a2 = fig.add_subplot(gs[2, c])
        a2.plot(x, exp_s, "-", label="expected")
        a2.plot(x, got_s, "--", label="received")
        a2.set_title(f"sin, harmonic {n}")
        a2.grid(True, alpha=0.3)
        a2.legend(loc="upper right")

        a3 = fig.add_subplot(gs[3, c])
        a3.plot(x, [g - e for g, e in zip(got_c, exp_c)], label="cos error")
        a3.plot(x, [g - e for g, e in zip(got_s, exp_s)], label="sin error")
        a3.axhline(TOL, color="r", ls=":", lw=1)
        a3.axhline(-TOL, color="r", ls=":", lw=1, label=f"±TOL ({TOL})")
        a3.set_title(f"error (received - expected), harmonic {n}")
        a3.set_xlabel("sample")
        a3.set_ylabel("LSB")
        a3.grid(True, alpha=0.3)
        a3.legend(loc="upper right")

    fig.savefig(outdir / f"{name}.png", dpi=110)
    plt.close(fig)
    return outdir / f"{name}.csv", outdir / f"{name}.png"

async def stream_angles(dut, angles, tag="", contiguous=False, plot=False, harmonics=(1, NH)):
    """Drive one entry of `angles` per cycle (None = idle). Records, optionally plots, then checks."""
    expected = deque()
    n_valid_inputs = sum(a is not None for a in angles)
    records = []
    started = False
    dropped_at = None

    for cycle in range(len(angles) + LATENCY + 3):
        await FallingEdge(dut.clk)

        if int(dut.data_valid_out.value) == 1:
            assert expected, f"{tag}: valid_out with nothing in flight"
            a = expected.popleft()
            got_c, got_s = read_outputs(dut)
            exp_c, exp_s = model(a)
            records.append(dict(angle=a, got_c=got_c, got_s=got_s, exp_c=exp_c, exp_s=exp_s))
            started = True
        elif contiguous and started and len(records) < n_valid_inputs and dropped_at is None:
            dropped_at = len(records)

        if cycle < len(angles) and angles[cycle] is not None:
            dut.angle.value = angles[cycle]
            dut.data_valid_in.value = 1
            expected.append(angles[cycle])
        else:
            dut.data_valid_in.value = 0

    # worst error and where it happened
    worst, worst_k, worst_where = 0, None, ""
    for k, r in enumerate(records):
        for i in range(NH):
            for kind in ("c", "s"):
                e = abs(r[f"got_{kind}"][i] - r[f"exp_{kind}"][i])
                if e > worst:
                    worst, worst_k = e, k
                    worst_where = f"{'cos' if kind == 'c' else 'sin'} harmonic {i+1}, angle={r['angle']}"
    dut._log.info(f"{tag}: {len(records)} result sets, worst error {worst} LSB ({worst_where})")

    if plot and records:
        csv_path, png_path = save_and_plot(records, tag, harmonics)
        dut._log.info(f"{tag}: wrote {csv_path} and {png_path}")

    # assertions come after plotting so a failure still leaves a plot behind
    assert dropped_at is None, f"{tag}: valid_out dropped after {dropped_at} outputs"
    assert not expected, f"{tag}: {len(expected)} inputs never came out"
    assert len(records) == n_valid_inputs, f"{tag}: sent {n_valid_inputs}, got {len(records)}"
    assert worst <= TOL, f"{tag}: worst error {worst} > TOL={TOL} at sample {worst_k} ({worst_where})"
    return records


############## Sawtooth Tests #########################
def sawtooth(step, n_samples, start=0):
    """Signed W-bit phase accumulator: start, start+step, ... wrapping naturally."""
    return [to_signed(start + k * step) for k in range(n_samples)]


@cocotb.test()
async def test_sawtooth_full_cycle(dut):
    await init(dut)
    step = (1 << W) // 256
    await stream_angles(dut, sawtooth(step, 256, start=-(1 << (W - 1))),
                        tag="sawtooth slow", contiguous=True, plot=True)

@cocotb.test()
async def test_sawtooth_multi_wrap(dut):
    await init(dut)
    await stream_angles(dut, sawtooth(1237, 600), tag="sawtooth fast",
                        contiguous=True, plot=True, harmonics=(1, 2, 5))

@cocotb.test()
async def test_sawtooth_down(dut):
    await init(dut)
    await stream_angles(dut, sawtooth(-517, 400, start=20000), tag="sawtooth down",
                        contiguous=True, plot=True)

@cocotb.test()
async def test_sawtooth_fine(dut):
    await init(dut)
    start = (1 << (W - 2)) - 150
    await stream_angles(dut, sawtooth(1, 300, start=start), tag="sawtooth fine",
                        contiguous=True, plot=True)


@cocotb.test()
async def test_reset_flushes_pipeline(dut):
    """Reset mid-flight kills in-flight results."""
    await init(dut)
    await FallingEdge(dut.clk)
    dut.angle.value = 1000
    dut.data_valid_in.value = 1
    await FallingEdge(dut.clk)
    dut.data_valid_in.value = 0
    await ClockCycles(dut.clk, 8)
    await FallingEdge(dut.clk)
    dut.rst.value = 1
    await ClockCycles(dut.clk, 2)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    for _ in range(LATENCY + 5):
        await FallingEdge(dut.clk)
        assert int(dut.data_valid_out.value) == 0, "stale valid after reset"



def harmonic_generator_runner():
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "verilator")
    proj_path = Path(__file__).resolve().parent.parent
    sys.path.append(str(proj_path / "sim" / "model"))
    sources = [proj_path / "hdl" / "cordic_cossin.sv",
               proj_path / "hdl" / "parallel_harmonic_generator.sv"]
    build_test_args = ["-Wall", "-Wno-fatal", "--timing", "--trace"]
    parameters = {"DATA_WIDTH": W, "MAX_HARMONIC": NH, "CORDIC_NUM_ITER": NITER}
    sys.path.append(str(proj_path / "sim"))
    hdl_toplevel = "harmonic_generator"
    runner = get_runner(sim)
    runner.build(
        sources=sources,
        hdl_toplevel=hdl_toplevel,
        always=True,
        build_args=build_test_args,
        parameters=parameters,
        timescale=('1ns', '1ps'),
        waves=True
    )
    runner.test(
        hdl_toplevel=hdl_toplevel,
        test_module=test_file,
        test_args=[],
        waves=True
    )


if __name__ == "__main__":
    harmonic_generator_runner()