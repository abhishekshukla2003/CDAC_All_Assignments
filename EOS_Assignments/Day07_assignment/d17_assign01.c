#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>

int main(void){
	int i;
	int s;
	int ret;
	printf("Parent Program started .......: \n");

	for(i= 0;i<5;i++){
		ret = fork();

	    	if( ret == 0)
	        {
			 printf("Inside Child : %d(%d)\n",getpid(),getppid());
			 sleep(5);
			 exit(0);
		}
	}
	printf("All five child are created .....\n");
	for(int i=0;i<5;i++){
		ret = wait(&s);
		printf("Parent : Exit status of child %d= %d\n",ret,WEXITSTATUS(s));
	}
	printf("Parent : program Finished....\n");
	
		return 0;
	}

