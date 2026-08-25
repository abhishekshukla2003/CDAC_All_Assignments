#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/wait.h>
#include<signal.h>
#include<stdlib.h>


void sigchld_handler(int sig, siginfo_t *info,void *ucontex)
{
	printf("Received SIGCHLD (%d) \n",sig);
	int s;
	wait(&s);
	printf("Exit staus of child:%d\n",WEXITSTATUS(s));

}


int main(void)
{
	char cmd[256];
	char *args[10], *ptr;
	int i = 0;
	struct sigaction sa;
	sa.sa_sigaction = sigchld_handler;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGCHLD,&sa,NULL);

	while(1)
	{
		printf("cmd> ");
		gets(cmd);

		i = 0;
		ptr = strtok(cmd, " ");
		do{
			args[i++] = ptr;
			ptr = strtok(NULL, " ");
		}while(ptr != NULL);
		args[i] = NULL;

		if(i==0)continue;
		int async =0;
		if(strcmp(args[i-1],"&")==0){
			async =1;
			args[i-1]=NULL;
		
		}
		

		if(strcmp(args[0], "exit") == 0)
			_exit(0);
		else if(strcmp(args[0], "cd") == 0)
			chdir(args[1]);
		else
		{
			int pid = fork();
			if(pid == 0)
			{
				
				int ret = execvp(args[0], args);
				
			}
			else
			{
				if(async ==0){	
				int s;
				wait(&s);
				}
			}

		}
	}
	
	return 0;
}












