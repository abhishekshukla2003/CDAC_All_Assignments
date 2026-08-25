#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/un.h>

#define SERV_PATH "/tmp/chat_socket"
int main(){
	int cli_fd,ret;
	struct sockaddr_un serv_addr;
	char msg[512];

	cli_fd = socket(AF_UNIX, SOCK_STREAM,0);
	memset(&serv_addr,0,sizeof(serv_addr));

	serv_addr.sun_family = AF_UNIX;
	strncpy(serv_addr.sun_path,SERV_PATH,sizeof(serv_addr.sun_path)-1);
	ret = connect(cli_fd,(struct sockaddr *)&serv_addr,sizeof(serv_addr));
	if(ret ==-1){
		perror("connect");
		close(cli_fd);
		return 1;
	}
	do
	{
		printf("client >");
		fgets(msg,sizeof(msg),stdin);

		write(cli_fd,msg,strlen(msg));
		ret =read(cli_fd, msg, sizeof(msg)-1);
		if(ret >0){
			msg[ret] ='\0';
			printf("server >%s",msg);
		}
	
	}while(strcmp(msg,"bye\n")!=0);

	close(cli_fd);
	printf("Connection closed\n");
	return 0;

}
