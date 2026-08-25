#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/un.h>
#include<errno.h>

#define SOCK_PATH "/tmp/chat_socket"  // Unix socket path

// Server
int main(){
    int serv_fd, cli_fd, ret;
    struct sockaddr_un serv_addr, cli_addr;
    socklen_t clisock_len = sizeof(cli_addr);
    char msg[512];
    
    
    
    serv_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if(serv_fd == -1) {
        perror("socket creation failed");
        return 1;
    }

    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sun_family = AF_UNIX;
    strncpy(serv_addr.sun_path, SOCK_PATH, sizeof(serv_addr.sun_path) - 1);

    ret = bind(serv_fd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
    if(ret == -1) {
        perror("bind failed");
        close(serv_fd);
        return 1;
    }

    listen(serv_fd, 5);
   
    memset(&cli_addr, 0, sizeof(cli_addr));
    cli_fd = accept(serv_fd, (struct sockaddr *)&cli_addr, &clisock_len);
    if(cli_fd == -1) {
        perror("accept failed");
        close(serv_fd);
        return 1;
    }
    
    do {
        ret = read(cli_fd, msg, sizeof(msg) - 1);
        if(ret <= 0) break;
        msg[ret] = '\0';  // Null terminate
        
        printf("client> %s", msg);
        printf("server> ");
        if(fgets(msg, sizeof(msg), stdin) == NULL) break;

        write(cli_fd, msg, strlen(msg));
    } while(strcmp(msg, "bye\n") != 0);

    close(cli_fd);
    close(serv_fd);
    unlink(SOCK_PATH);  // Clean up socket file
    
    return 0;
}
