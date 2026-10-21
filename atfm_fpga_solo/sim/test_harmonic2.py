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

async def stream_angles(dut, angles, tag="", contiguous=False):
    """Drive one entry of `angles` per cycle (None = idle cycle) and check every output."""
    expected = deque()
    n_valid_inputs = sum(a is not None for a in angles)
    checked, worst, started = 0, 0, False

    for cycle in range(len(angles) + LATENCY + 3):
        await FallingEdge(dut.clk)

        # outputs at this edge belong to inputs driven LATENCY cycles ago
        if int(dut.data_valid_out.value) == 1:
            assert expected, f"{tag}: valid_out with nothing in flight"
            worst = max(worst, check(dut, expected.popleft(), tag=tag))
            checked += 1
            started = True
        elif contiguous and started and checked < n_valid_inputs:
            raise AssertionError(f"{tag}: valid_out dropped after {checked} outputs")

        # drive the next input (cleared after the list ends, one edge later than the last send)
        if cycle < len(angles) and angles[cycle] is not None:
            dut.angle.value = angles[cycle]
            dut.data_valid_in.value = 1
            expected.append(angles[cycle])
        else:
            dut.data_valid_in.value = 0

    assert not expected, f"{tag}: {len(expected)} inputs never came out"
    assert checked == n_valid_inputs, f"{tag}: sent {n_valid_inputs}, got {checked}"
    dut._log.info(f"{tag}: checked {checked} result sets, worst error {worst} LSB")

@cocotb.test()
async def test_reset(dut):
    """valid_out stays low after reset with no input."""
    await init(dut)
    for _ in range(LATENCY + 5):
        await FallingEdge(dut.clk)
        assert int(dut.data_valid_out.value) == 0, "valid_out high with no input"


@cocotb.test()
async def test_latency_and_pulse(dut):
    """One angle -> exactly one data_valid_out pulse, LATENCY cycles later."""
    await init(dut)
    latency, pulses = await run_one(dut, 1 << (W - 3))  # 45 degrees
    assert latency == LATENCY, f"expected latency {LATENCY}, measured {latency}"
    assert pulses == 1, f"expected a single-cycle valid_out pulse, saw {pulses} cycles high"


@cocotb.test()
async def test_directed_angles(dut):
    """Corners and a few odd angles, one at a time."""
    await init(dut)
    angles = [0, 1 << (W - 2), -(1 << (W - 2)), -(1 << (W - 1)),
              (1 << (W - 1)) - 1, 1 << (W - 3), -(1 << (W - 3)), 12345, -9876]
    worst = 0
    for a in angles:
        latency, pulses = await run_one(dut, a)
        assert latency is not None, f"no valid_out for angle {a}"
        assert pulses == 1
    dut._log.info("directed angles done")


@cocotb.test()
async def test_random_angles(dut):
    """Random angles, one after another with random idle gaps."""
    await init(dut)
    random.seed(1234)
    for _ in range(60):
        a = random.randint(-(1 << (W - 1)), (1 << (W - 1)) - 1)
        latency, pulses = await run_one(dut, a)
        assert latency == LATENCY and pulses == 1, f"angle {a}: latency={latency}, pulses={pulses}"
        await ClockCycles(dut.clk, random.randint(0, 3))

from collections import deque

@cocotb.test()
async def test_streaming(dut):
    """New angle (with random gaps) on every cycle; outputs come back in order."""
    await init(dut)
    random.seed(99)
    expected = deque()
    checked = 0
    for _ in range(300):
        await FallingEdge(dut.clk)
        # check first: outputs here correspond to inputs sent LATENCY cycles ago
        if int(dut.data_valid_out.value) == 1:
            assert expected, "valid_out with nothing in flight"
            check(dut, expected.popleft(), tag="stream")
            checked += 1
        send = random.random() < 0.7
        dut.data_valid_in.value = int(send)
        if send:
            a = random.randint(-(1 << (W - 1)), (1 << (W - 1)) - 1)
            dut.angle.value = a
            expected.append(a)
    dut.data_valid_in.value = 0
    for _ in range(LATENCY + 3):    # drain
        await FallingEdge(dut.clk)
        if int(dut.data_valid_out.value) == 1:
            check(dut, expected.popleft(), tag="drain")
            checked += 1
    assert not expected, f"{len(expected)} inputs never came out"
    dut._log.info(f"checked {checked} result sets")

# only for serial harmonic generator test
# @cocotb.test()
# async def test_ignore_while_busy(dut):
#     """A data_valid_in pulse while issuing must be ignored (only first angle is produced)."""
#     await init(dut)
#     first, second = 5000, -20000
#     await FallingEdge(dut.clk)
#     dut.angle.value = first
#     dut.data_valid_in.value = 1
#     pulses = 0
#     for cycle in range(1, LATENCY + 20):
#         await FallingEdge(dut.clk)
#         dut.data_valid_in.value = 0
#         if cycle == 3:                      # module is mid-issue here
#             dut.angle.value = second
#             dut.data_valid_in.value = 1
#         if int(dut.data_valid_out.value) == 1:
#             pulses += 1
#             check(dut, first, tag="busy test")
#     assert pulses == 1, f"expected 1 result set, saw {pulses}"
@cocotb.test()
async def test_streaming_new(dut):
    """Random angles with random gaps."""
    await init(dut)
    random.seed(99)
    angles = [random.randint(-(1 << (W - 1)), (1 << (W - 1)) - 1) if random.random() < 0.7 else None
              for _ in range(300)]
    await stream_angles(dut, angles, tag="random stream")

############## Sawtooth Tests #########################
def sawtooth(step, n_samples, start=0):
    """Signed W-bit phase accumulator: start, start+step, ... wrapping naturally."""
    return [to_signed(start + k * step) for k in range(n_samples)]


@cocotb.test()
async def test_sawtooth_full_cycle(dut):
    """Slow ramp: one full -180 to +180 sweep (256 samples), covers every quadrant in order."""
    await init(dut)
    step = (1 << W) // 256
    await stream_angles(dut, sawtooth(step, 256, start=-(1 << (W - 1))),
                        tag="sawtooth slow", contiguous=True)


@cocotb.test()
async def test_sawtooth_multi_wrap(dut):
    """Fast ramp with an odd step: wraps many times, so the angle jumps around the circle."""
    await init(dut)
    await stream_angles(dut, sawtooth(1237, 600), tag="sawtooth fast", contiguous=True)


@cocotb.test()
async def test_sawtooth_down(dut):
    """Falling ramp (negative step) that wraps from -max to +max."""
    await init(dut)
    await stream_angles(dut, sawtooth(-517, 400, start=20000), tag="sawtooth down", contiguous=True)


@cocotb.test()
async def test_sawtooth_fine(dut):
    """Step of 1 LSB across the +-90 degree quadrant boundary (where the fold switches)."""
    await init(dut)
    start = (1 << (W - 2)) - 150          # just below +90 degrees
    await stream_angles(dut, sawtooth(1, 300, start=start), tag="sawtooth fine", contiguous=True)



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