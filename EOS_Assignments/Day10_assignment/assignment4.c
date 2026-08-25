#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	int pipefd[2];
	pid_t pid1,pid2;

	//creat pipe
	
	if(pipe(pipefd)== -1)
	{
		perror("pipe");
		exit(EXIT_FAILURE);
	
	}
	pid1 =fork();
	if(pid1 < 0){
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (pid1 == 0)
	{
		close(pipefd[0]);
		dup2(pipefd[1], STDOUT_FILENO);
		close(pipefd[1]);

		execlp("who","who",(char *)NULL);
		perror("execlp who");

		exit(EXIT_FAILURE);
	}
	//second child- runs wc
	if (pid2 ==0){
		close(pipefd[1]);       //close unused wr end
		//child2;redirect stdin to pipe rd end

		dup2(pipefd[0], STDIN_FILENO);     //replace stdin with pip rd
		close(pipefd[0]);                  //close oriiginal rd end

		execlp("wc","wc",(char *)NULL);
		perror("execlp wc");
		exit(EXIT_FAILURE);
	}
	//parent: close both end of pip & wait
	close(pipefd[0]);
	close(pipefd[1]);

	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);

	return 0;

}
