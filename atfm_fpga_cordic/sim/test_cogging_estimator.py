import cocotb
import os
import random
import sys
import math
import logging
import matplotlib.pyplot as plt
from pathlib import Path
from cocotb.triggers import Timer
from cocotb.utils import get_sim_time
from cocotb.runner import get_runner

test_file = os.path.basename(__file__).replace(".py","")

CLK_FREQ_HZ = 100_000_000
CLK_PERIOD_NS = 1/CLK_FREQ_HZ * 1e9
SAMPLE_FREQ_HZ = 100_000
CLK_CYCLES_PER_SAMPLE = math.floor(CLK_FREQ_HZ/SAMPLE_FREQ_HZ)

NUM_POLE_PAIRS = 50
BIT_WIDTH = 64
FRACTION_BITS = 18
POS_WIDTH = 24
EMA_ALPHA = 0.3
LEARNING_RATE = 0.005
NUM_HARMONICS = 4

# 100 MHz

def eval_freq_sum(series, angle):
    return sum([
        cos_amplitude * math.cos(freq * angle)
        + sin_amplitude * math.sin(freq * angle)
        for cos_amplitude, sin_amplitude, freq in series
    ])

async def generate_clock(clock_wire):
    while True: # repeat forever
        clock_wire.value = 0
        await Timer(CLK_PERIOD_NS/2,units="ns")
        clock_wire.value = 1
        await Timer(CLK_PERIOD_NS/2,units="ns")

@cocotb.test()
async def test_always_transmit(dut):
    await cocotb.start( generate_clock( dut.clk ) )

    x_series = []
    motor_velocity_series = []
    target_velocity_series = [] 

    dut.pos.value = 0
    dut.rst.value = 0

    target_vel_basis = (2**POS_WIDTH) * 10
    current_vel = target_vel_basis + 0.01
    angle = 0.0

    dt_ns = CLK_PERIOD_NS * CLK_CYCLES_PER_SAMPLE
    dt_s = dt_ns/1e9

    DISTURBANCE_FREQUENCIES = []
    for harmonic in range(1, 4 + 1):
        unit = (target_vel_basis * 0.4)/harmonic
        DISTURBANCE_FREQUENCIES.append(
            (
                unit * random.uniform(-1.0, 1.0),
                unit * random.uniform(-1.0, 1.0),
                harmonic * NUM_POLE_PAIRS
            )
        )

    NUM_ITERATIONS = SAMPLE_FREQ_HZ
    DURATION = dt_s * NUM_ITERATIONS

    VELOCITY_FREQUENCIES = []
    for harmonic in range(1, 4 + 1):
        unit = (target_vel_basis * 2.0)/harmonic
        VELOCITY_FREQUENCIES.append(
            (
                unit * random.uniform(-1.0, 1.0),
                unit * random.uniform(-1.0, 1.0),
                harmonic * math.pi
            )
        )

    for i in range(NUM_ITERATIONS):


        target_vel = target_vel_basis + eval_freq_sum(VELOCITY_FREQUENCIES, i * dt_s) + target_vel_basis * math.sin(round(i/NUM_ITERATIONS * 8) + 10) * 0.4
        
        # dumb motor kinematics
        angle_in_rad = angle/(2.0**POS_WIDTH) * 2.0 * math.pi
        disturbance = eval_freq_sum(DISTURBANCE_FREQUENCIES, angle_in_rad)
        cancellation_effort = float(dut.cogging_amt_fxp_out.value.signed_integer) / 2.0**FRACTION_BITS

        current_vel = target_vel + disturbance + cancellation_effort
        angle += current_vel * dt_s

        dut.pos.value = int(angle) % 2**POS_WIDTH
        dut.vel_command_fxp.value = int(target_vel * 2.0**(FRACTION_BITS))
        
        x_series.append(i * dt_s)
        target_velocity_series.append(target_vel)
        motor_velocity_series.append(current_vel)

        await Timer(dt_ns, units="ns")

        

    plt.ylim(-2 * target_vel_basis, 4 * target_vel_basis)
    plt.plot(x_series, motor_velocity_series)
    plt.plot(x_series, target_velocity_series)
    plt.show()

    
    



def test_runner():
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "verilator")
    proj_path = Path(__file__).resolve().parent.parent
    hdl = proj_path / "hdl"
    sys.path.append(str(proj_path / "sim" / "model"))
    
    sources = [
        hdl / "cogging_estimator.sv",
        hdl / "velocity_estimator.sv",
        hdl / "cordic_cossin.sv"
    ] #grow/modify this as needed.

    hdl_toplevel = "cogging_estimator"
    build_test_args = ["-Wall"]#,"COCOTB_RESOLVE_X=ZEROS"]
    parameters = {
        "NUM_HARMONICS": NUM_HARMONICS,
        "TEETH_PER_REVOLUTION": NUM_POLE_PAIRS,
        "WIDTH": BIT_WIDTH,
        "POS_WIDTH": POS_WIDTH,
        "FRACTION_BITS": FRACTION_BITS,
        "CLK_CYCLES_PER_SAMPLE": CLK_CYCLES_PER_SAMPLE,
        "INPUT_CLK_FREQ": CLK_FREQ_HZ,
        "EMA_ALPHA": EMA_ALPHA,
        "LEARNING_RATE": LEARNING_RATE
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
    test_runner()