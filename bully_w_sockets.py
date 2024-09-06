import sys
import socket


def run_server(port: int, ip: str="0.0.0.0"):
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind((ip, port))
    

def main(args: list):
    
    
    for c in args:
        print(c)

if __name__ == "__main__":
    if len(sys.argv < 3):
        print(f"Usage: {sys.argv[0]} <process_id> <ip1> <ip2> ... <ipN>")
    
    main(sys.argv)