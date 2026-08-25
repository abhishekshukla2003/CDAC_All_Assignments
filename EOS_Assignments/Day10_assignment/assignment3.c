#define _GNU_SOURCE

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>



int main()
{
	int pipefd[2];

	//create a pipe
	if (pipe(pipefd) == -1)
	{
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	//get pipe buffer size only
	int pipe_size = fcntl(pipefd[1], F_GETPIPE_SZ);
	if(pipe_size == -1)
	{
		perror("fcntl");
		exit(EXIT_FAILURE);
	
	}
	printf("pipe buffer size:%d bytes\n",pipe_size);

	//close pipe fd
	close(pipefd[0]);
	close(pipefd[1]);


	return 0;
}
