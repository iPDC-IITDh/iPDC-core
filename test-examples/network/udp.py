import socket

# create a UDP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# bind the socket to the port
server_address = ('127.0.0.1', 4433)
sock.bind(server_address)

while True:
    # receive incoming packets
    data, address = sock.recvfrom(4096)
    
    # print the contents of the packet
    print(f"received {len(data)} bytes from {address}: {data}")