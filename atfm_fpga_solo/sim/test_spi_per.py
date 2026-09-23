import cocotb
import os
import random
import sys
from pathlib import Path
from cocotb.clock import Clock
from cocotb.triggers import Timer, ClockCycles, RisingEdge, FallingEdge, ReadOnly, with_timeout
from cocotb.utils import get_sim_time as gst
from cocotb.runner import get_runner
test_file = os.path.basename(__file__).replace(".py","")

# ──────────────────────────────────────────────
# Parameters — match spi_peripheral defaults
# ──────────────────────────────────────────────
DATA_WIDTH       = 8
DCLK_HALF_PERIOD = 500  # ns — half period of SPI data clock

# ──────────────────────────────────────────────
# Helper: fake SPI controller (drives cs/dclk/copi)
# ──────────────────────────────────────────────
async def fake_spi_controller(dut, data_to_send: int, num_bits: int = DATA_WIDTH):
    """
    Drives cs, dclk, copi as a real SPI controller would.
    SPI Mode 1 (CPOL=0, CPHA=1):
      - DCLK idle low
      - Output data on rising edge, sample on falling edge
    Returns list of cipo bits received.
    """
    cipo_bits = []

    # Pull CS low to start
    dut.cs.value   = 0
    dut.dclk.value = 0
    await Timer(DCLK_HALF_PERIOD, units='ns')  # small CS setup time

    for i in range(num_bits):
        bit_to_send = (data_to_send >> (num_bits - 1 - i)) & 1

        # Rising edge: drive copi, peripheral shifts out cipo
        dut.dclk.value = 1
        dut.copi.value = bit_to_send
        await Timer(DCLK_HALF_PERIOD, units='ns')

        # Sample cipo on falling edge
        dut.dclk.value = 0
        await ReadOnly()
        cipo_bit = dut.cipo.value.integer
        cipo_bits.append(cipo_bit)
        dut._log.info(f"[Controller] Sent copi={bit_to_send}, received cipo={cipo_bit} (bit {i})")
        await Timer(DCLK_HALF_PERIOD, units='ns')

    # Pull CS high to end transaction
    dut.cs.value   = 1
    dut.dclk.value = 0
    await Timer(DCLK_HALF_PERIOD, units='ns')

    return cipo_bits


# ──────────────────────────────────────────────
# Test A: Single transaction — check data_out
# ──────────────────────────────────────────────
@cocotb.test()
async def test_single_receive(dut):
    """Controller sends one byte, verify peripheral latches it in data_out."""
    dut._log.info("=== test_single_receive ===")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    DATA_FROM_CONTROLLER = 0xA5
    PERIPHERAL_RESPONSE  = 0x3C

    # Reset
    dut.rst.value      = 1
    dut.cs.value       = 1
    dut.dclk.value     = 0
    dut.copi.value     = 0
    dut.data_in.value  = PERIPHERAL_RESPONSE
    await ClockCycles(dut.clk, 5)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    await ClockCycles(dut.clk, 3)

    # Confirm idle
    assert dut.busy.value == 0,       "Should not be busy after reset"
    assert dut.data_valid.value == 0, "data_valid should be low after reset"

    dut._log.info(f"[Test] Controller sending 0x{DATA_FROM_CONTROLLER:02X}")
    await fake_spi_controller(dut, DATA_FROM_CONTROLLER)

    # Let system clock synchronize
    await ClockCycles(dut.clk, 10)
    await ReadOnly()

    received = dut.data_out.value.integer
    dut._log.info(f"[Test] data_out = 0x{received:02X} (expected 0x{DATA_FROM_CONTROLLER:02X})")
    assert received == DATA_FROM_CONTROLLER, \
        f"data_out mismatch: got 0x{received:02X}, expected 0x{DATA_FROM_CONTROLLER:02X}"

    dut._log.info("[Test] PASSED: single receive")
    await ClockCycles(dut.clk, 10)


# ──────────────────────────────────────────────
# Test B: Verify cipo sends peripheral's data_in MSB-first
# ──────────────────────────────────────────────
@cocotb.test()
async def test_cipo_sends_data_in(dut):
    """Peripheral should shift out data_in MSB-first on cipo."""
    dut._log.info("=== test_cipo_sends_data_in ===")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    PERIPHERAL_RESPONSE = 0b10110001  # known pattern

    # Reset
    dut.rst.value     = 1
    dut.cs.value      = 1
    dut.dclk.value    = 0
    dut.copi.value    = 0
    dut.data_in.value = PERIPHERAL_RESPONSE
    await ClockCycles(dut.clk, 5)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    await ClockCycles(dut.clk, 3)

    # Run controller, collect cipo bits
    cipo_bits = await fake_spi_controller(dut, 0x00)  # send zeros, we only care about cipo

    # Reconstruct byte from cipo bits MSB-first
    reconstructed = 0
    for b in cipo_bits:
        reconstructed = (reconstructed << 1) | b

    dut._log.info(f"[Test] cipo bits: {cipo_bits}")
    dut._log.info(f"[Test] Reconstructed: 0x{reconstructed:02X} (expected 0x{PERIPHERAL_RESPONSE:02X})")
    assert reconstructed == PERIPHERAL_RESPONSE, \
        f"cipo mismatch: got 0x{reconstructed:02X}, expected 0x{PERIPHERAL_RESPONSE:02X}"

    dut._log.info("[Test] PASSED: cipo bit order")
    await ClockCycles(dut.clk, 10)


# ──────────────────────────────────────────────
# Test C: data_valid pulses once after transaction
# ──────────────────────────────────────────────
@cocotb.test()
async def test_data_valid_pulse(dut):
    """data_valid should pulse high for one system clock cycle after last bit."""
    dut._log.info("=== test_data_valid_pulse ===")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    # Reset
    dut.rst.value     = 1
    dut.cs.value      = 1
    dut.dclk.value    = 0
    dut.copi.value    = 0
    dut.data_in.value = 0x55
    await ClockCycles(dut.clk, 5)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    await ClockCycles(dut.clk, 3)

    # Start controller in background
    cocotb.start_soon(fake_spi_controller(dut, 0xAA))

    # Wait for data_valid to pulse
    await with_timeout(RisingEdge(dut.data_valid), 500_000, 'ns')
    dut._log.info("[Test] data_valid went high")

    # Should go low on the next system clock cycle
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert dut.data_valid.value == 0, "data_valid should go low after one cycle"

    dut._log.info("[Test] PASSED: data_valid pulse")
    await ClockCycles(dut.clk, 10)


# ──────────────────────────────────────────────
# Test D: busy signal tracks CS
# ──────────────────────────────────────────────
@cocotb.test()
async def test_busy_tracks_cs(dut):
    """busy should go high when CS falls and low when CS rises."""
    dut._log.info("=== test_busy_tracks_cs ===")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    # Reset
    dut.rst.value     = 1
    dut.cs.value      = 1
    dut.dclk.value    = 0
    dut.copi.value    = 0
    dut.data_in.value = 0x00
    await ClockCycles(dut.clk, 5)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    await ClockCycles(dut.clk, 3)

    assert dut.busy.value == 0, "busy should be 0 before transaction"

    # Pull CS low
    dut.cs.value = 0
    await ClockCycles(dut.clk, 5)  # let synchronizer catch up
    await ReadOnly()
    assert dut.busy.value == 1, "busy should be 1 when CS is low"
    dut._log.info("[Test] busy went high with CS low")

    # Pull CS high
    dut.cs.value = 1
    await ClockCycles(dut.clk, 5)
    await ReadOnly()
    assert dut.busy.value == 0, "busy should be 0 when CS returns high"
    dut._log.info("[Test] busy went low with CS high")

    dut._log.info("[Test] PASSED: busy tracks CS")
    await ClockCycles(dut.clk, 10)


# ──────────────────────────────────────────────
# Test E: Multiple back-to-back transactions
# ──────────────────────────────────────────────
@cocotb.test()
async def test_multiple_transactions(dut):
    """Send several bytes from controller, verify peripheral receives each one."""
    dut._log.info("=== test_multiple_transactions ===")
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    test_vectors = [0xAA, 0x55, 0xFF, 0x00, 0x12, 0xAB]

    # Reset
    dut.rst.value     = 1
    dut.cs.value      = 1
    dut.dclk.value    = 0
    dut.copi.value    = 0
    dut.data_in.value = 0x00
    await ClockCycles(dut.clk, 5)
    await FallingEdge(dut.clk)
    dut.rst.value = 0
    await ClockCycles(dut.clk, 3)

    for byte in test_vectors:
        dut._log.info(f"[Test] Sending 0x{byte:02X}")
        await fake_spi_controller(dut, byte)
        await ClockCycles(dut.clk, 10)
        await ReadOnly()

        received = dut.data_out.value.integer
        dut._log.info(f"[Test] data_out = 0x{received:02X} (expected 0x{byte:02X})")
        assert received == byte, \
            f"Mismatch: sent 0x{byte:02X}, got 0x{received:02X}"

        await ClockCycles(dut.clk, 5)

    dut._log.info("[Test] PASSED: multiple transactions")
    await ClockCycles(dut.clk, 10)


# ──────────────────────────────────────────────
# Runner
# ──────────────────────────────────────────────
def spi_peripheral_runner():
    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim       = os.getenv("SIM", "icarus")
    proj_path = Path(__file__).resolve().parent.parent
    sys.path.append(str(proj_path / "sim" / "model"))
    sources   = [proj_path / "hdl" / "spi_peripheral.sv"]
    build_test_args = ["-Wall"]
    parameters = {'DATA_WIDTH': DATA_WIDTH}
    sys.path.append(str(proj_path / "sim"))
    hdl_toplevel = "spi_peripheral"
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
    spi_peripheral_runner()