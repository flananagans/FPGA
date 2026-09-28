import cocotb
import os
import random
import sys
import math
import logging
from pathlib import Path
from cocotb.triggers import Timer
from cocotb.utils import get_sim_time
from cocotb.runner import get_runner

test_file = os.path.basename(__file__).replace(".py","")

CLK_FREQ_HZ = 100_000_000
CLK_PERIOD_NS = 1/CLK_FREQ_HZ * 1e9
SAMPLE_FREQ_HZ = 40_000
CLK_CYCLES_PER_SAMPLE = math.floor(CLK_FREQ_HZ/SAMPLE_FREQ_HZ)
INPUT_WIDTH = 28
OUTPUT_WIDTH = 32

def sign(x):
    return (x > 0) - (x < 0)

# 100 MHz
async def generate_clock(clock_wire):
    while True: # repeat forever
        clock_wire.value = 0
        await Timer(CLK_PERIOD_NS/2,units="ns")
        clock_wire.value = 1
        await Timer(CLK_PERIOD_NS/2,units="ns")

async def init(dut):
    dut.rst.value = 1
    dut.pos.value = 0

    await cocotb.start( generate_clock( dut.clk ) )

@cocotb.test()
async def test_basic_estimation(dut):

    INPUT_WIDTH = eval(os.environ.get("INPUT_WIDTH"))
    OUTPUT_WIDTH = eval(os.environ.get("OUTPUT_WIDTH"))

    await init(dut)
    assert dut.velocity.value == 0, "initial velocity should be 0"

    velocities_to_try = [
        random.randint(-2**(OUTPUT_WIDTH - 1), 2**(OUTPUT_WIDTH - 1) - 1)
        for _ in range(50)
    ]

    # add limiting cases
    velocities_to_try.append(0)
    velocities_to_try.append(-2**(OUTPUT_WIDTH - 1))
    velocities_to_try.append(2**(OUTPUT_WIDTH - 1) - 1)

    await Timer(CLK_PERIOD_NS, "ns")
    dut.rst.value = 0
    await Timer(CLK_PERIOD_NS * CLK_CYCLES_PER_SAMPLE, "ns")

    for velocity in velocities_to_try:
        expected_before_truncation = (int(velocity / SAMPLE_FREQ_HZ) * SAMPLE_FREQ_HZ) 
        expected = 2 * (expected_before_truncation % 2**(OUTPUT_WIDTH - 1)) \
            - expected_before_truncation % 2**(OUTPUT_WIDTH)

        dut.pos.value = (dut.pos.value + int(velocity / SAMPLE_FREQ_HZ)) % (2**INPUT_WIDTH)
        await Timer(CLK_PERIOD_NS * CLK_CYCLES_PER_SAMPLE, "ns")
        assert expected == dut.velocity.value.signed_integer, f"expected {expected:08x} got {dut.velocity.value.signed_integer:08x}"


# make sure that in the case of an overflow on the position, the velocity maintains the correct sign
@cocotb.test()
async def test_overflow_sign(dut):
    await init(dut)
    await Timer(CLK_PERIOD_NS, "ns")
    dut.pos.value = -1
    dut.rst.value = 0
    for _ in range(10):
        expected = dut.pos.value.signed_integer * SAMPLE_FREQ_HZ * 2
        dut.pos.value = dut.pos.value.signed_integer * -1
        await Timer(CLK_PERIOD_NS * CLK_CYCLES_PER_SAMPLE, "ns")
        assert expected == dut.velocity.value.signed_integer, f"expected {expected:08x} got {dut.velocity.value.signed_integer:08x}"

"""the code below should largely remain unchanged in structure, though the specific files and things
specified should get updated for different simulations.
"""
def test_runner(parameters):
    """Simulate the counter using the Python runner."""
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "verilator")
    proj_path = Path(__file__).resolve().parent.parent
    hdl = proj_path / "hdl"
    sys.path.append(str(proj_path / "sim" / "model"))
    
    sources = [hdl / "velocity_estimator.sv"] #grow/modify this as needed.

    hdl_toplevel = "velocity_estimator"
    build_test_args = ["-Wall"]#,"COCOTB_RESOLVE_X=ZEROS"]
    sys.path.append(str(proj_path / "sim"))
    runner = get_runner(sim)
    runner.build(
        sources=sources,
        hdl_toplevel=hdl_toplevel,
        always=True,
        build_args=build_test_args,
        parameters=parameters,
        timescale = ('1ns','1ps'),
        waves=True
    )
    run_test_args = []
    runner.test(
        hdl_toplevel=hdl_toplevel,
        test_module=test_file,
        test_args=run_test_args,
        waves=True
    )
 
if __name__ == "__main__":

    os.environ["INPUT_WIDTH"] = repr(INPUT_WIDTH)
    os.environ["OUTPUT_WIDTH"] = repr(OUTPUT_WIDTH)

    test_runner(
        {
            "INPUT_CLK_FREQ": CLK_FREQ_HZ,
            "INPUT_WIDTH": INPUT_WIDTH,
            "OUTPUT_WIDTH": OUTPUT_WIDTH,
            "CLK_CYCLES_PER_SAMPLE": CLK_CYCLES_PER_SAMPLE
        }
    )

    # try again but with bigger input width than output width

    os.environ["INPUT_WIDTH"] = repr(OUTPUT_WIDTH)
    os.environ["OUTPUT_WIDTH"] = repr(INPUT_WIDTH)

    test_runner(
        {
            "INPUT_CLK_FREQ": CLK_FREQ_HZ,
            "INPUT_WIDTH": OUTPUT_WIDTH,
            "OUTPUT_WIDTH": INPUT_WIDTH,
            "CLK_CYCLES_PER_SAMPLE": CLK_CYCLES_PER_SAMPLE
        }
    )