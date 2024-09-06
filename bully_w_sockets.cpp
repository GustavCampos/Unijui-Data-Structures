#include <iostream>
#include <string>
#include <vector>
#include <sys/types.h>

// Change based on OS
// Linux
// #include <sys/socket.h>
// #include <netdb.h>

// Windows
#include <winsock2.h>
#include <ws2tcpip.h>

using namespace std;

int create_socket(int port) {
    int socketFileDescriptor = socket(AF_INET, SOCK_STREAM, 0);

    if (socketFileDescriptor < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    };

    // Setting up server address
    sockaddr_in serverAddr;
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(port);

    // Binding server address
    if (bind(socketFileDescriptor, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    return socketFileDescriptor
}

int main(int argc, char *argv) {
    if (argc < 3) {
        cerr << "Usage: " << argv[0] << "<process_id> <ip1> <ip2> ... <ipN>" << endl;
        return EXIT_FAILURE;
    }

    int process_id = stoi(argv[1]);
    vector<string> ips(argv + 2, argv + argc);

    bully

    int addressInfo = getaddrinfo(ip, port, );

    return 0;
}