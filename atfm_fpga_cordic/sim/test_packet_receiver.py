import cocotb
import os
import random
import sys
import math
import logging
from pathlib import Path
from cocotb.types import Array, LogicArray, Range
from cocotb.triggers import Timer
from cocotb.utils import get_sim_time
#from vicoco.vivado_runner import get_runner
from cocotb.runner import get_runner

test_file = os.path.basename(__file__).replace(".py","")

CLK_FREQ_HZ = 100_000_000
CLK_PERIOD_NS = 1/CLK_FREQ_HZ * 1e9
WORD_WIDTH = 8
WORDS = 4
SOP_WORDS = 4
SOP = b"\xDE\xAD\xBE\xEF"

print(SOP)

current_params = None

# 100 MHz
async def generate_clock(clock_wire):
    while True: # repeat forever
        clock_wire.value = 0
        await Timer(CLK_PERIOD_NS/2,units="ns")
        clock_wire.value = 1
        await Timer(CLK_PERIOD_NS/2,units="ns")

async def put_word(dut, word):
    bit_reversed_word = sum([
        ((word >> og_bit) & 1) * 2**(WORD_WIDTH - 1 - og_bit) for og_bit in range(WORD_WIDTH)
    ])
    dut.word_in.value = bit_reversed_word #if dut.LITTLE_BIT_ORDER else bit_reversed_word
    dut.should_sample.value = 0
    await Timer(CLK_PERIOD_NS,units="ns")
    dut.should_sample.value = 1
    await Timer(CLK_PERIOD_NS,units="ns")
    dut.should_sample.value = 0
    await Timer(CLK_PERIOD_NS,units="ns")

@cocotb.test()
async def test_packet_receiver(dut):

    dut.should_sample.value = 0
    dut.word_in.value = 0

    await cocotb.start( generate_clock( dut.clk ) )

    
    NUM_PACKETS = 4

    packets_to_try = [
        [random.randint(0, 2**WORD_WIDTH - 1) for _1 in range(WORDS)] for _2 in range(NUM_PACKETS)
    ]

    #print(f"{dut.LITTLE_WORD_ORDER = } {dut.LITTLE_BIT_ORDER = }")
    for packet in packets_to_try:

        initial_data_out = dut.data_out.value.integer

        for word in SOP:
            assert dut.data_out.value.integer == initial_data_out, \
                f"data out changed intermittently; expected {hex(initial_data_out)} got {hex(dut.data_out.value.integer)}"
            await put_word(dut, word)
        
        for word in reversed(packet):
            assert dut.data_out.value.integer == initial_data_out, \
                f"data out changed intermittently; expected {hex(initial_data_out)} got {hex(dut.data_out.value.integer)}"
            await put_word(dut, word)

        packet_val = sum( word * 2**(WORD_WIDTH * i) for i, word in enumerate(packet) )
        assert dut.data_out.value.integer == packet_val, \
            f"incorrect output, expected {hex(packet_val)} got {hex(dut.data_out.value.integer)}"

"""the code below should largely remain unchanged in structure, though the specific files and things
specified should get updated for different simulations.
"""
def counter_runner():
    """Simulate the counter using the Python runner."""
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "verilator")
    proj_path = Path(__file__).resolve().parent.parent
    hdl = proj_path / "hdl"
    sys.path.append(str(proj_path / "sim" / "model"))
    
    sources = [hdl / "packet_receiver.sv"] #grow/modify this as needed.

    hdl_toplevel = "packet_receiver"
    build_test_args = ["-Wall"]#,"COCOTB_RESOLVE_X=ZEROS"]

    base_params = {
        "WORDS": WORDS,
        "WORD_WIDTH": WORD_WIDTH,
        "SOP_WORDS": SOP_WORDS,
        "START_OF_PACKET": int.from_bytes(SOP)
    }

    param_sets = [
        {
            **base_params,
            "LITTLE_BIT_ORDER": 0,#little_bit_order,
            "LITTLE_WORD_ORDER": 0#little_word_order
        }
        for little_bit_order in {0, 1}
        for little_word_order in {0, 1}
    ]

    for parameters in param_sets:
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