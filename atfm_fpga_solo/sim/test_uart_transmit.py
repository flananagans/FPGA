import cocotb
import os
import random
import sys
from math import log
import logging
from pathlib import Path
from cocotb.clock import Clock
from cocotb.triggers import Timer, ClockCycles, RisingEdge, FallingEdge, ReadOnly,with_timeout
from cocotb.utils import get_sim_time as gst
from cocotb.runner import get_runner
test_file = os.path.basename(__file__).replace(".py","")

# utility function to reverse bits:
def reverse_bits(n,size):
    reversed_n = 0
    for i in range(size):
        reversed_n = (reversed_n << 1) | (n & 1)
        n >>= 1
    return reversed_n

# test spi message:
SPI_RESP_MSG = 0x2345
#flip them:
# SPI_RESP_MSG = reverse_bits(SPI_RESP_MSG,16)

# this module below is a simple "fake" spi module written in Python that we can...
# test our design against.
async def test_spi_device(dut):
  count = 0
  count_max = 8 #change for different sizes
  while True:
    await RisingEdge(dut.trigger) #listen for falling CS
    dut.din.value = (SPI_RESP_MSG>>count)&0x1 #feed in lowest bit
    dut._log.info(f"SPI peripheral Device Sending: {dut.din.value}")
    count+=1
    count%=8
    while dut.busy.value.integer ==1:
      await RisingEdge(dut.dclk)
      bit = dut.dout.value.integer #grab value:
      dut._log.info(f"SPI peripheral Device Receiving: {bit}")
    #   await FallingEdge(dut.dclk)
    #   dut.cipo.value = (SPI_RESP_MSG>>count)&0x1 #feed in lowest bit
    #   dut._log.info(f"SPI peripheral Device Sending: {dut.cipo.value}")
      count+=1
      count%=16

@cocotb.test()
async def test_a(dut):
    """cocotb test for the SPI module"""
    dut._log.info("Starting...")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    cocotb.start_soon(test_spi_device(dut))
    dut._log.info("Holding reset...")
    dut.rst.value = 1
    dut.trigger.value = 0
    dut.din.value = 0xEF&0xFF #set in 16 bit input value
    await ClockCycles(dut.clk, 3) #wait three clock cycles
    await  FallingEdge(dut.clk)
    dut.rst.value = 0 #un reset device
    await ClockCycles(dut.clk, 3) #wait a few clock cycles
    await  FallingEdge(dut.clk)
    dut._log.info("Setting Trigger")
    dut.trigger.value = 1
    await ClockCycles(dut.clk, 1,rising=False)
    dut.din.value = 0xAA # once trigger in is off, don't expect data_in to stay the same!!
    dut.trigger.value = 0
    await with_timeout(RisingEdge(dut.busy),500000,'ns')
    await ReadOnly()
    data_out = dut.dout.value
    dut._log.info(f"Receiver Data: {data_out}")
    await ClockCycles(dut.clk, 300)

def spi_con_runner():
    """Simulate the counter using the Python runner."""
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "icarus")
    proj_path = Path(__file__).resolve().parent.parent
    sys.path.append(str(proj_path / "sim" / "model"))
    sources = [proj_path / "hdl" / "uart_transmit.sv"]
    build_test_args = ["-Wall"]
    parameters = {'INPUT_CLOCK_FREQ' : 100_000_000, 'BAUD_RATE' : 115200} #!!!change these to do different versions
    sys.path.append(str(proj_path / "sim"))
    hdl_toplevel = "uart_transmit"
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
    spi_con_runner()