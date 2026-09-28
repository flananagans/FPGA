import serial
# Configure your port settings
PORT = '/dev/ttyUSB1'        # Use '/dev/ttyUSB0' or '/dev/ttyACM0' on Linux/Mac
BAUDRATE = 9600      # Match this with your device's speed
TIMEOUT = 1          # 1-second read timeout

# Open the port using 'with' to ensure it closes automatically
with serial.Serial(PORT, BAUDRATE, timeout=TIMEOUT) as ser:
    print(f"Connected to {PORT}")
    
    while True:

        last_4_bytes = bytearray(4)
        while last_4_bytes != b"\xDE\xAD\xBE\xEF":
            last_4_bytes.pop(0)
            last_4_bytes += ser.read(1)

        
        cos_num = int.from_bytes(ser.read(2), byteorder="little", signed=True)
        sin_num = int.from_bytes(ser.read(2), byteorder="little", signed=True)
        print("---------------")
        print(f"cos: {cos_num/2**15}\nsin: {sin_num/2**15}")
              
