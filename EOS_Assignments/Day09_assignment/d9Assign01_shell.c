#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

void sigint_handler(int sig)
{
	printf("Signal caught %d:\n",sig);	

}
int main(void){
	struct sigaction sa;
	memset(&sa,0,sizeof(struct sigaction));
	sa.sa_handler = sigint_handler;
	sigfillset(&sa.sa_mask);
	sigaction(SIGINT,&sa,NULL);

	char cmd[256];
	char *args[10], *ptr;
	int i=0;

	while(1)
	{
		printf("cmd>");
		gets(cmd);

		i=0;
		ptr = strtok(cmd," ");
		do{
			args[i++] = ptr;
			ptr = strtok(NULL," ");

		}while(ptr !=NULL);
		args[i] =NULL;

		if(strcmp(args[0], "exit")==0)
			_exit(0);
		else if(strcmp(args[0], "cd")==0)
			chdir(args[1]);

		else
		{
			int pid = fork();
			if(pid == 0)
			{
				int ret = execvp(args[0],args);
			
			}
			else
			{
				int s;
				wait(&s);
			
			}
		}
	
	}
	return 0;
}
