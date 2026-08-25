#include<stdio.h>
#include<unistd.h>
#include<sys/socket.h>
#include<arpa/inet.h>     //man inet_addr()
#include<netinet/in.h>    //man 7 ip (sockaddr_in)
#include<netinet/ip.h>
#include<string.h>
#include<sys/un.h>
#define SERV_ADDR "127.0.0.1"
#define PORT 2089
int main()
{
	int cfd = socket(AF_UNIX,SOCK_STREAM,0);
	struct sockaddr_un s;
	s.sun_family = AF_UNIX;
	strcpy(s.sun_path,"/tmp/unixsocket");
	int ret = connect(cfd,(struct sockaddr *)&s,sizeof(s));
	int a,b;
	printf("Enter a,b: ");
	scanf("%d%d",&a,&b);

	int res;
	write(cfd,&a,sizeof(int));
	write(cfd,&b,sizeof(int));
	read(cfd,&res,sizeof(res));
	printf("Server> %d",res);

	close(cfd);

}

	

