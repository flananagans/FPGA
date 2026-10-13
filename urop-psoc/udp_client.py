import socket
import time
import matplotlib.pyplot as plt
import struct

SERVER_IP_ADDR = "192.168.10.1"
SERVER_PORT = 50009

CLIENT_IP_ADDR = "192.168.10.55"
CLIENT_PORT = 50009

my_socket = socket.socket(socket.AddressFamily.AF_INET, socket.SocketKind.SOCK_STREAM)
SOCKET_TIMEOUT = 5.0
my_socket.settimeout(SOCKET_TIMEOUT)
my_socket.bind((CLIENT_IP_ADDR, CLIENT_PORT))
my_socket.connect((SERVER_IP_ADDR, SERVER_PORT))

MAX_PACKETS = 100
DATA_LENGTH = 344 * 4

my_socket.send(b"START\x00")

if __name__ == "__main__":

    drops = 0
    total_packets = 0

    try:
        while total_packets < 10000:
            start_time = time.perf_counter()
            bytes_received = []
            for i in range(MAX_PACKETS):
                data = my_socket.recv(16384)
                bytes_received.extend(data)

            total_packets += len(bytes_received)/DATA_LENGTH

            end_time = time.perf_counter()
            total_dur = end_time - start_time

            

            sorted_list = []
            for i in range(0, len(bytes_received), 4):
                sorted_list.append( int.from_bytes(bytes_received[i:i+4], "little") )
            sorted_list.sort()

            for i in range(1, len(sorted_list)):
                if sorted_list[i] != sorted_list[i-1] + 1:
                    pass
                    #print(f"{i = } {sorted_list[i] = } {sorted_list[i-1] = }")
                drops += 1 if sorted_list[i] != sorted_list[i-1] + 1 else 0 
            x_series = [i for i in range(0, len(sorted_list))]

            #print(f"received {round(len(bytes_received)/1024)} KiB in {round(total_dur, 2)} sec")
            #print(f" { round(len(bytes_received)/total_dur/(1024**2), 2) } MiB/sec")
            #print(f" { round(len(bytes_received)/total_dur/(1024**2) * 8, 2) } Mib/sec")
            #print(f"{drops = }, latest = {sorted_list[-1]}")
            print(f"drops = {drops}/{round(total_packets)}, ({round(drops/total_packets * 100, 2)}%)")
    except KeyboardInterrupt:
        my_socket.close()