import cocotb
import cordic
import os
import random
import sys
import logging
from pathlib import Path
from cocotb.triggers import Timer
from cocotb.utils import get_sim_time
from cocotb.runner import get_runner

test_file = os.path.basename(__file__).replace(".py","")

WIDTH = 16
NUM_ITERATIONS = WIDTH

# 100 MHz
async def generate_clock(clock_wire):
    while True: # repeat forever
        clock_wire.value = 0
        await Timer(5,units="ns")
        clock_wire.value = 1
        await Timer(5,units="ns")

@cocotb.test()
async def first_test(dut):

    py_cordic = cordic.CordicModule(WIDTH, NUM_ITERATIONS)
    await cocotb.start( generate_clock( dut.clk ) )
    
    angles_to_try = [
        random.randint(-180, 179)
        for _ in range(200)
    ]
    angles_to_try.extend([90, -90, 179, -180])

    for angle in angles_to_try:
        scaled_angle = int(2**WIDTH * (angle/360))
        py_out = py_cordic.cossin(scaled_angle)
        dut.angle.value = scaled_angle
        await Timer(5, "us")
        #for i in range(NUM_ITERATIONS+1):
        #    print("---------")
        #    print(f"x_{i} | fpga: {hex(dut.x_pipe[i].value.signed_integer)} py: {hex(py_out[i][0])}")
        #    print(f"y_{i} | fpga: {hex(dut.y_pipe[i].value.signed_integer)} py: {hex(py_out[i][1])}")
        #    print(f"z_{i} | fpga: {hex(dut.total_angle_pipe[i].value.signed_integer)} py: {hex(py_out[i][2])}")
        assert py_out[-1][0] == dut.cos.value.signed_integer, f"py: {hex(py_out[-1][0])} != fpga: {hex(dut.cos.value.signed_integer)}"
        assert py_out[-1][1] == dut.sin.value.signed_integer, f"py: {hex(py_out[-1][1])} != fpga: {hex(dut.sin.value.signed_integer)}"
    
    #print(f"cos | fpga: {dut.cos.value.signed_integer} py: {py_out[0]}")
    #print(f"sin | fpga: {dut.sin.value.signed_integer} py: {py_out[1]}")
    

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
    
    sources = [hdl / "cordic_cossin.sv"] #grow/modify this as needed.

    hdl_toplevel = "cordic_cossin"
    build_test_args = ["-Wall"]#,"COCOTB_RESOLVE_X=ZEROS"]
    parameters = {
        "WIDTH": WIDTH,
        "NUM_ITERATIONS": NUM_ITERATIONS
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