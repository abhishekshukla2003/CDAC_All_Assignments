#include<stdio.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include <arpa/inet.h>  
#include<sys/un.h>
#include<string.h>
#include<signal.h>
#define SERV_ADDR "127.0.0.1"
#define PORT 2089
int sfd;
void sig_handler(int sig)
{

	shutdown(sfd,SHUT_RDWR);
	unlink("/tmp/unixsocket");
	_exit(0);
}

int main()
{
	sfd = socket(AF_UNIX,SOCK_STREAM,0);// create socket
	signal(SIGINT,sig_handler);
	if(sfd == -1)
	{
		printf("socket creation is FAILED!!\n");
		_exit(0);
	}
	struct sockaddr_un s;
	s.sun_family = AF_UNIX;
	strcpy(s.sun_path , "/tmp/unixsocket");
	unlink("/tmp/unixsocket");

	int ret = bind(sfd,(struct sockaddr *)&s,sizeof(s));
	if(ret == -1)
	{
		printf("bind() FAILED!!!\n");
		_exit(1);
	}
	int l = listen(sfd,5);

	struct sockaddr_un c;
	socklen_t len = sizeof(c);
	int num1,num2;
	int res;
	while(1){
		int a = accept(sfd,(struct sockaddr *)&c,&len);
		memset(&c,0,sizeof(c));
	//READ
		read(a,&num1,sizeof(int));
		read(a,&num2,sizeof(int));
		printf("%d + %d\n",num1,num2);
		res = num1 + num2;
	//WRITE
		write(a,&res,sizeof(int));
		close(a);
		
	}
	return 0;
}
