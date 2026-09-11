#!/usr/bin/env python3
import serial

PORT       = '/dev/ttyUSB0'   # or 'COM3' on Windows
BAUD       = 921600
SYNC       = 0xA5
PACKET_LEN = 5
FILENAME   = 'encoder_positions.csv'

ser = serial.Serial(PORT, BAUD, timeout=1)

def parse(buf):
    """Yield 19-bit positions; return leftover bytes."""
    i, n = 0, len(buf)
    out = []
    while i + PACKET_LEN <= n:
        if buf[i] != SYNC:
            i += 1
            continue
        b1, b2, b3 = buf[i+1], buf[i+2], buf[i+3]
        if b3 & 0x08:                       # reserved bit must be 0 -> false sync
            i += 1
            continue
        position = b1 | (b2 << 8) | ((b3 & 0x07) << 16)   # 19-bit position
        out.append(position)
        i += PACKET_LEN
    return out, buf[i:]

with open(FILENAME, 'w') as f:
    print(f"Logging positions to {FILENAME}\nPress Ctrl+C to stop\n")
    buf   = bytearray()
    count = 0
    lines = []
    try:
        while True:
            data = ser.read(ser.in_waiting or 1)
            if data:
                buf.extend(data)
                positions, buf = parse(buf)
                for position in positions:
                    lines.append(f"{position}\n")
                    count += 1
                if len(lines) >= 500:        # batch writes for speed
                    f.writelines(lines)
                    lines.clear()
                    print(f"{count} samples | last POS:{position}")
    except KeyboardInterrupt:
        if lines:
            f.writelines(lines)
        print(f"\nLogging stopped. {count} positions saved to {FILENAME}")
        ser.close()