import cocotb
import os
import random
import sys
from math import log
import logging
from pathlib import Path
from cocotb.clock import Clock
from cocotb.triggers import Timer, ClockCycles, RisingEdge, FallingEdge, ReadOnly
from cocotb.utils import get_sim_time as gst
from cocotb.runner import get_runner
test_file = os.path.basename(__file__).replace(".py","")

@cocotb.test()
async def test_a(dut):
    """cocotb test for seven segment controller"""
    dut._log.info("Starting...")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut._log.info("Holding reset...")
    dut.rst.value = 1
    dut._log.info("setting val to 'h01234567")
    dut.val.value = 0x01234567
    await ClockCycles(dut.clk, 3)
    await  FallingEdge(dut.clk)
    dut._log.info("setting reset to 0")
    dut.rst.value = 0
    await ClockCycles(dut.clk, 300)
    dut._log.info("Holding reset...")
    dut.val.value = 0x89abcdef
    await ClockCycles(dut.clk, 300)

def ssc_runner():
    """Simulate the counter using the Python runner."""
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "icarus")
    proj_path = Path(__file__).resolve().parent.parent
    sys.path.append(str(proj_path / "sim" / "model"))
    sources = [proj_path / "hdl" / "seven_segment_controller.sv"]
    # sources += [proj_path / "hdl" / "bto7s.sv"] #uncomment this if you make bto7s module its own file
    build_test_args = ["-Wall"]
    parameters = {'COUNT_PERIOD':20} #setting parameter to a short amount (for testing)
    sys.path.append(str(proj_path / "sim"))
    hdl_toplevel = "seven_segment_controller"
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
    ssc_runner()