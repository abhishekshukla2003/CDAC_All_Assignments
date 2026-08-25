#include<stdio.h>
#include<sys/ipc.h>
#include<sys/wait.h>
#include<sys/msg.h>
#include<unistd.h>

#define key 0x1234

typedef struct msgbuf{
	long mtype;
	int a;
	int b;
	int res;

}msgp_t;

int main()
{
	int mfd = msgget(key,IPC_CREAT|0600);
	int pid =fork();
	msgp_t msgp;
	msgp.mtype =11;
	if(pid == 0)
	{
		//child
		printf("ENter two numbers:");
		scanf("%d%d",&msgp.a,&msgp.b);

		msgsnd(mfd,(msgp_t *)&msgp,sizeof(msgp_t)-sizeof(long),0);
		msgp_t res;
		msgrcv(mfd,&res,sizeof(msgp_t)-sizeof(long),11,0);
		printf("The sum =%d\n",res.res);
		_exit(0);
	}
	//parent
	msgp_t par;
	msgrcv(mfd,&par,sizeof(msgp_t)-sizeof(long),11,0);
	par.res = par.a + par.b;

	//send result
	
	msgsnd(mfd,(msgp_t *)&par,sizeof(msgp_t)-sizeof(long),0);

	int s;
	wait(&s);
	msgctl(mfd,IPC_RMID,NULL);
	return 0;
}
