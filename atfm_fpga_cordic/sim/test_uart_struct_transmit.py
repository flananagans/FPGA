import cocotb
import os
import random
import sys
import math
import logging
from pathlib import Path
from test_uart_transmit import uart_byte_interpret
from cocotb.triggers import Timer
from cocotb.utils import get_sim_time
from cocotb.runner import get_runner

test_file = os.path.basename(__file__).replace(".py","")

CLK_FREQ_HZ = 100_000_000
CLK_PERIOD_NS = 1/CLK_FREQ_HZ * 1e9
BAUD_RATE = 115200
BAUD_PERIOD_NS = math.floor(CLK_FREQ_HZ/BAUD_RATE) * CLK_PERIOD_NS
NUM_WORDS = 4
DATA_BITS = 8

# 100 MHz
async def generate_clock(clock_wire):
    while True: # repeat forever
        clock_wire.value = 0
        await Timer(CLK_PERIOD_NS/2,units="ns")
        clock_wire.value = 1
        await Timer(CLK_PERIOD_NS/2,units="ns")

async def wait_for_start_and_interpret(dut):
    while dut.dout.value == 1:
        await Timer(CLK_PERIOD_NS,units="ns")
    return await uart_byte_interpret(dut.word_transmitter)

@cocotb.test()
async def test_multi_byte_transmit(dut):
    await cocotb.start( generate_clock( dut.clk ) )

    longs_to_try = [
        random.randint(0, 2**(NUM_WORDS * DATA_BITS) - 1)
        for _ in range(10)
    ]

    for long_idx, long in enumerate(longs_to_try):
        print(f"trying {hex(long)}")
        dut.din.value = long
        dut.trigger.value = 1
        for i in range(0, NUM_WORDS):
            print(f"byte {i}")
            out_byte = await wait_for_start_and_interpret(dut)
            expected_byte = (long >> (i * DATA_BITS)) & 0xFF
            assert out_byte == expected_byte, f"expected {hex(expected_byte)}, got {hex(out_byte)}"
            if long_idx < len(longs_to_try) - 1:
                dut.din.value = longs_to_try[long_idx + 1]
        
    
    

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
    
    sources = [hdl / "uart_transmit.sv", hdl / "uart_struct_transmit.sv"] #grow/modify this as needed.

    hdl_toplevel = "uart_struct_transmit"
    build_test_args = ["-Wall"]#,"COCOTB_RESOLVE_X=ZEROS"]
    parameters = {
        "INPUT_CLOCK_FREQ": CLK_FREQ_HZ,
        "BAUD_RATE": BAUD_RATE,
        "DATA_BITS": DATA_BITS,
        "WORDS": NUM_WORDS
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