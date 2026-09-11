import cocotb
import os
import random
import sys
import logging
from pathlib import Path
from cocotb.clock import Clock
from cocotb.triggers import Timer, ClockCycles, RisingEdge, FallingEdge, ReadOnly
from cocotb.utils import get_sim_time as gst
from cocotb.runner import get_runner
test_file = os.path.basename(__file__).replace(".py","")

@cocotb.test()
async def test_a(dut):
    """cocotb test for testing the evt counter!"""
    dut._log.info("Starting...")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    await ClockCycles(dut.clk, 3)
    dut._log.info("Holding reset...")
    dut.rst.value = 1
    dut.evt.value = 0
    await ClockCycles(dut.clk, 3)
    assert dut.count.value.integer == 0, "Reset not setting count to 0 :/"
    await  FallingEdge(dut.clk)
    dut._log.info("setting reset to 0")
    dut.rst.value = 0
    await ClockCycles(dut.clk, 3) #checking on falling edge.
    assert dut.count.value.integer == 0, "count not holding to 0 even with evt=0."
    await  FallingEdge(dut.clk)
    dut.evt.value = 1
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    dut._log.info(f"Currently @ {gst('ns')} ns in sim (reference)")
    assert dut.count.value.integer == 3, "count did not increment correctly"
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    assert dut.count.value.integer == 6, "count did not increment correctly."
    dut.evt.value = 0
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    assert dut.count.value.integer == 6, "count increment or something :/"
    dut.rst.value = 1
    await ClockCycles(dut.clk, 1)
    await FallingEdge(dut.clk)
    assert dut.count.value.integer == 0, "reset failed."
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    dut.evt.value = 1
    await ClockCycles(dut.clk, 5)
    await ReadOnly()
    assert dut.count.value.integer == 5, "count didn't start up correctly."
    await FallingEdge(dut.clk)
    dut.evt.value = 0
    await ClockCycles(dut.clk, 5)
    await ReadOnly()
    assert dut.count.value.integer == 5, "count didn't stall correctly."
    await FallingEdge(dut.clk)
    dut.evt.value = 1
    await ClockCycles(dut.clk, 5)
    await ReadOnly()
    assert dut.count.value.integer == 10, "count didn't increment correctly."

def evt_counter_runner():
    """Simulate the evt_counter using the Python runner."""
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "icarus")
    proj_path = Path(__file__).resolve().parent.parent
    sys.path.append(str(proj_path / "sim" / "model"))
    sources = [proj_path / "hdl" / "evt_counter.sv"] #grow/modify this as needed.
    build_test_args = ["-Wall"]#,"COCOTB_RESOLVE_X=ZEROS"]
    parameters = {} #!!! nice figured it out.
    sys.path.append(str(proj_path / "sim"))
    hdl_toplevel = "evt_counter"
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
    evt_counter_runner()




