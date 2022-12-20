#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
    int sockfd;
    struct sockaddr_in server_addr;
    char message[] = "hello server";

    /* create a socket */
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        perror("Error creating socket");
        return 1;
    }

    /* set up server address */
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(4433);
    if (inet_aton("127.0.0.1", &server_addr.sin_addr) == 0) {
        perror("Invalid address");
        return 1;
    }

    /* send the message */
    if (sendto(sockfd, message, strlen(message), 0, (struct sockaddr *) &server_addr, sizeof(server_addr)) < 0) {
        perror("Error sending message");
        return 1;
    }

    return 0;
}
