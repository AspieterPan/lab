#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    // create socket
    int sock = socket(AF_INET, SOCK_STREAM, 0);

    // send request to server
    struct sockaddr_in serv_addr;
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv_addr.sin_port = htons(1234);
    connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));

    // read data server send back
    char buffer[40];
    recv(sock, buffer, sizeof(buffer) - 1, 0);

    printf("Message form server: %s\n", buffer);

    // close socket
    close(sock);

    return 0;
}
