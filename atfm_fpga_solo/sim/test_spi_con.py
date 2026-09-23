import cocotb
import os
import random
import sys
from math import log
import logging
from pathlib import Path
from cocotb.clock import Clock
from cocotb.triggers import Timer, ClockCycles, RisingEdge, FallingEdge, ReadOnly, with_timeout
from cocotb.utils import get_sim_time as gst
from cocotb.runner import get_runner
test_file = os.path.basename(__file__).replace(".py","")

# ──────────────────────────────────────────────
# Parameters — match your SPI controller defaults
# ──────────────────────────────────────────────
DATA_WIDTH     = 32
DATA_CLK_PERIOD = 28   # cycles between SPI clock edges

# ──────────────────────────────────────────────
# Helper: fake SPI peripheral (runs concurrently)
# Drives cipo bit-by-bit in response to dclk
# ──────────────────────────────────────────────
async def fake_spi_peripheral(dut, response: int):
    """
    Mimics a real SPI peripheral on the other side of the bus.
    Waits for CS to go low, then drives cipo MSB-first on each
    rising edge of dclk (SPI Mode 1: CPOL=0, CPHA=1 — controller
    samples on falling edge, so we drive on rising edge).
    """
    bits = [(response >> (DATA_WIDTH - 1 - i)) & 1 for i in range(DATA_WIDTH)]
    bit_idx = 0

    # Wait for CS to go low (start of transaction)
    await FallingEdge(dut.cs)
    dut._log.info(f"[Peripheral] CS went low, starting transaction. Sending 0x{response:02X}")

    # for bit in bits:
    #     await RisingEdge(dut.dclk)
    #     dut.cipo.value = bit
    #     dut._log.info(f"[Peripheral] Driving cipo = {bit} (bit {bit_idx})")
    #     bit_idx += 1
    
    for i, bit in enumerate(bits):
        # Drive BEFORE rising edge and hold through the whole high phase
        dut.cipo.value = bit
        dut._log.info(f"[Peripheral] Pre-driving cipo={bit} for bit {i}")
        await RisingEdge(dut.dclk)   # controller is now in CLOCK_HIGH
        # hold cipo stable through entire CLOCK_HIGH period
        await FallingEdge(dut.dclk)  # controller samples at end of CLOCK_HIGH


    # Wait for CS to go high (end of transaction)
    await RisingEdge(dut.cs)
    dut._log.info(f"[Peripheral] CS went high, transaction complete.")
    dut.cipo.value = 0


# ──────────────────────────────────────────────
# Test A: Single transaction, check data_out and data_valid
# ──────────────────────────────────────────────
@cocotb.test()
async def test_single_transaction(dut):
    """Send one byte, receive one byte, verify both."""
    dut._log.info("=== test_single_transaction ===")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    DATA_TO_SEND = 0xA5
    PERIPHERAL_RESPONSE = 0x3C

    # Reset
    dut.rst.value     = 1
    dut.trigger.value = 0
    dut.data_in.value = 0
    dut.cipo.value    = 0
    await ClockCycles(dut.clk, 3)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    await ClockCycles(dut.clk, 3)

    # Confirm idle state
    assert dut.busy.value == 0,      "Should not be busy after reset"
    assert dut.cs.value   == 1,      "CS should be high (inactive) after reset"
    assert dut.dclk.value == 0,      "DCLK should be low after reset"

    # Start fake peripheral in background
    cocotb.start_soon(fake_spi_peripheral(dut, PERIPHERAL_RESPONSE))

    # Trigger a transaction
    dut.data_in.value = DATA_TO_SEND

    await RisingEdge(dut.clk)
    dut.trigger.value = 1
    dut._log.info(f"[Test] Trigger set high at t={gst('ns'):.0f}ns")

    # Hold for one full cycle so posedge clk definitely sees it
    await RisingEdge(dut.clk)
    dut.trigger.value = 0
    dut._log.info(f"[Test] Trigger set low at t={gst('ns'):.0f}ns")

    # Now busy should go high within a cycle or two
    await with_timeout(RisingEdge(dut.busy), 200, 'ns')
    dut._log.info(f"[Test] Busy went high at t={gst('ns'):.0f}ns")

    await ReadOnly()
    assert dut.cs.value == 0, "CS should be low during transaction"

    await with_timeout(RisingEdge(dut.data_valid), 100_000, 'ns')
    await ReadOnly()

    received = dut.data_out.value.integer
    dut._log.info(f"[Test] data_out = 0x{received:02X} (expected 0x{PERIPHERAL_RESPONSE:02X})")
    assert received == PERIPHERAL_RESPONSE, \
        f"data_out mismatch: got 0x{received:02X}, expected 0x{PERIPHERAL_RESPONSE:02X}"

    await with_timeout(FallingEdge(dut.busy), 200_000, 'ns')
    assert dut.cs.value   == 1, "CS should be high after transaction"
    assert dut.busy.value == 0, "Should not be busy after transaction"

    dut._log.info("[Test] PASSED: single transaction")
    await ClockCycles(dut.clk, 2000)


# ──────────────────────────────────────────────
# Test B: Verify COPI sends bits MSB-first
# ──────────────────────────────────────────────
# @cocotb.test()
# async def test_copi_bit_order(dut):
#     """Manually clock through and verify each copi bit is MSB-first."""
#     dut._log.info("=== test_copi_bit_order ===")
#     cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

#     DATA_TO_SEND = 0b10110001  # known pattern

#     # Reset
#     dut.rst.value     = 1
#     dut.trigger.value = 0
#     dut.data_in.value = 0
#     dut.cipo.value    = 0
#     await ClockCycles(dut.clk, 3)
#     await FallingEdge(dut.clk)
#     dut.rst.value = 0
#     await ClockCycles(dut.clk, 3)

#     # Trigger
#     dut.data_in.value = DATA_TO_SEND
#     await FallingEdge(dut.clk)
#     dut.trigger.value = 1
#     await ClockCycles(dut.clk, 1, rising=False)
#     dut.trigger.value = 0

#     # await with_timeout(RisingEdge(dut.busy), 500, 'ns')

#     # Sample copi on each rising edge of dclk
#     received_bits = []
#     for i in range(DATA_WIDTH):
#         await RisingEdge(dut.dclk)
#         await ReadOnly()
#         bit = dut.copi.value.integer
#         received_bits.append(bit)
#         dut._log.info(f"[Test] dclk rising edge {i}: copi = {bit}")
#         dut.cipo.value = 0  # drive cipo to keep peripheral happy

#     # Reconstruct received byte MSB-first
#     reconstructed = 0
#     for b in received_bits:
#         reconstructed = (reconstructed << 1) | b

#     dut._log.info(f"[Test] Reconstructed from copi: 0x{reconstructed:02X} (expected 0x{DATA_TO_SEND:02X})")
#     assert reconstructed == DATA_TO_SEND, \
#         f"COPI bit order wrong: got 0x{reconstructed:02X}, expected 0x{DATA_TO_SEND:02X}"

#     await with_timeout(FallingEdge(dut.busy), 500_000, 'ns')
#     dut._log.info("[Test] PASSED: copi bit order")
#     await ClockCycles(dut.clk, 10)


# ──────────────────────────────────────────────
# Test C: Multiple back-to-back transactions
# ──────────────────────────────────────────────
# @cocotb.test()
# async def test_multiple_transactions(dut):
#     """Send several bytes in sequence, verify each one."""
#     dut._log.info("=== test_multiple_transactions ===")
#     cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

#     test_vectors = [
#         (0xAA, 0x55),
#         (0xFF, 0x00),
#         (0x0F, 0xF0),
#         (0x12, 0x34),
#     ]

#     # Reset
#     dut.rst.value     = 1
#     dut.trigger.value = 0
#     dut.data_in.value = 0
#     dut.cipo.value    = 0
#     await ClockCycles(dut.clk, 3)
#     await FallingEdge(dut.clk)
#     dut.rst.value = 0
#     await ClockCycles(dut.clk, 3)

#     for send, response in test_vectors:
#         dut._log.info(f"[Test] Sending 0x{send:02X}, expecting 0x{response:02X}")
#         cocotb.start_soon(fake_spi_peripheral(dut, response))

#         dut.data_in.value = send
#         await FallingEdge(dut.clk)
#         dut.trigger.value = 1
#         await ClockCycles(dut.clk, 1, rising=False)
#         dut.trigger.value = 0

#         await with_timeout(RisingEdge(dut.busy), 500, 'ns')
#         await with_timeout(FallingEdge(dut.busy), 500_000, 'ns')
#         await ReadOnly()

#         received = dut.data_out.value.integer
#         dut._log.info(f"[Test] Received 0x{received:02X}")
#         assert received == response, \
#             f"Transaction failed: sent 0x{send:02X}, got 0x{received:02X}, expected 0x{response:02X}"

#         await ClockCycles(dut.clk, 5)  # small gap between transactions

#     dut._log.info("[Test] PASSED: multiple transactions")
#     await ClockCycles(dut.clk, 10)


# ──────────────────────────────────────────────
# Test D: data_valid pulses exactly once per transaction
# ──────────────────────────────────────────────
# @cocotb.test()
# async def test_data_valid_pulse(dut):
#     """Verify data_valid goes high for exactly one cycle after transaction."""
#     dut._log.info("=== test_data_valid_pulse ===")
#     cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

#     PERIPHERAL_RESPONSE = 0x7E

#     # Reset
#     dut.rst.value     = 1
#     dut.trigger.value = 0
#     dut.data_in.value = 0
#     dut.cipo.value    = 0
#     await ClockCycles(dut.clk, 3)
#     await FallingEdge(dut.clk)
#     dut.rst.value = 0
#     await ClockCycles(dut.clk, 3)

#     cocotb.start_soon(fake_spi_peripheral(dut, PERIPHERAL_RESPONSE))

#     dut.data_in.value = 0x11
#     await FallingEdge(dut.clk)
#     dut.trigger.value = 1
#     await ClockCycles(dut.clk, 1, rising=False)
#     dut.trigger.value = 0

#     # Wait for data_valid to go high
#     await with_timeout(RisingEdge(dut.data_valid), 500_000, 'ns')
#     dut._log.info("[Test] data_valid went high")

#     # It should go low on the next cycle
#     await RisingEdge(dut.clk)
#     await ReadOnly()
#     assert dut.data_valid.value == 0, "data_valid should be low after one cycle"

#     dut._log.info("[Test] PASSED: data_valid pulse")
#     await ClockCycles(dut.clk, 10)


# ──────────────────────────────────────────────
# Runner
# ──────────────────────────────────────────────
def spi_con_runner():
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim      = os.getenv("SIM", "icarus")
    proj_path = Path(__file__).resolve().parent.parent
    sys.path.append(str(proj_path / "sim" / "model"))
    sources  = [proj_path / "hdl" / "spi_con.sv"]
    build_test_args = ["-Wall"]
    parameters = {'DATA_WIDTH': DATA_WIDTH, 'DATA_CLK_PERIOD': DATA_CLK_PERIOD}
    sys.path.append(str(proj_path / "sim"))
    hdl_toplevel = "spi_con"
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
        waves=True
    )

if __name__ == "__main__":
    spi_con_runner()