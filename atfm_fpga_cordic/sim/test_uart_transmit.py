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
BAUD_RATE = 115200
BAUD_PERIOD_NS = math.floor(CLK_FREQ_HZ/BAUD_RATE) * CLK_PERIOD_NS

# 100 MHz
async def generate_clock(clock_wire):
    while True: # repeat forever
        clock_wire.value = 0
        await Timer(CLK_PERIOD_NS/2,units="ns")
        clock_wire.value = 1
        await Timer(CLK_PERIOD_NS/2,units="ns")

async def uart_byte_interpret(dut):
    assert dut.busy.value == 1, "expected to be busy but not" 

    assert dut.dout.value == 0, "bad start bit"
    await Timer(BAUD_PERIOD_NS, "ns")

    assert dut.busy.value == 1, "expected to be busy but not"

    out_byte = 0

    for bit in range(0, 8):
        assert dut.busy.value == 1, "expected to be busy but not"
        out_byte += 2**bit * dut.dout.value.integer
        await Timer(BAUD_PERIOD_NS, "ns")

    assert dut.busy.value == 1, "expected to be busy but not"

    assert dut.dout.value == 1, "bad stop bit"
    await Timer(BAUD_PERIOD_NS, "ns")

    return out_byte

@cocotb.test()
async def test_pulse_transmit(dut):
    await cocotb.start( generate_clock( dut.clk ) )
    
    assert dut.dout.value == 1, "bad idle state"

    bytes_to_try = [
        random.randint(0, 255)
        for _ in range(10)
    ]

    i = 0
    for byte in bytes_to_try:
        print(f"iteration {i}")
        i += 1
        dut.din.value = byte
        assert dut.busy.value == 0, "expected to not be busy but am"
        dut.trigger.value = 1
        # wait two clock cycles for ts to start going
        await Timer(CLK_PERIOD_NS, "ns")
        dut.trigger.value = 0
        out_byte = await uart_byte_interpret(dut)
        assert out_byte == byte, "wrong byte was transmitted"
        assert dut.busy.value == 0, "expected to not be busy but am"

    await Timer(BAUD_PERIOD_NS, "ns")
    assert dut.dout.value == 1, "bad idle state"

@cocotb.test()
async def test_always_transmit(dut):
    await cocotb.start( generate_clock( dut.clk ) )
    
    assert dut.dout.value == 1, "not high when not transmitting"

    bytes_to_try = [
        random.randint(0, 255)
        for _ in range(10)
    ]

    dut.trigger.value = 1
    dut.din.value = bytes_to_try[0]
    await Timer(CLK_PERIOD_NS, "ns")

    for i, byte in enumerate(bytes_to_try[0:-1]):
        print(f"iteration {i}")
        print(f"{dut.data_buf.value = }, {bin(byte) = }")

        dut.din.value = bytes_to_try[i + 1]

        out_byte = await uart_byte_interpret(dut)
        assert out_byte == byte, "wrong byte was transmitted"

"""the code below should largely remain unchanged in structure, though the specific files and things
specified should get updated for different simulations.
"""
def counter_runner():
    """Simulate the counter using the Python runner."""
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "icarus")
    proj_path = Path(__file__).resolve().parent.parent
    hdl = proj_path / "hdl"
    sys.path.append(str(proj_path / "sim" / "model"))
    
    sources = [hdl / "uart_transmit.sv"] #grow/modify this as needed.

    hdl_toplevel = "uart_transmit"
    build_test_args = ["-Wall"]#,"COCOTB_RESOLVE_X=ZEROS"]
    parameters = {
        "INPUT_CLOCK_FREQ": CLK_FREQ_HZ,
        "BAUD_RATE": BAUD_RATE,
        "DATA_BITS": 8
    }
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
    counter_runner()