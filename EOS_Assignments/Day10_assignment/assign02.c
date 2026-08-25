#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	int arr[2];
	int p = pipe(arr);
	int arr1[2];

	int p2 = pipe(arr1);

	int ret  = fork();

	if(ret == 0)
	{
		int a,b;
		printf("Enter two numbers:\n");
		scanf("%d%d",&a,&b);
		int str[2];
		
		str[0] =a;
		str[1] = b;
		close(arr[0]);   //close read end
		write(arr[1],str,8); //write a & b
		close(arr[1]);    //close write end

		close(arr1[1]);   //close write end
		int res;
		read(arr1[0],&res,sizeof(int));
		printf("CHILD :%d\n",res);
		close(arr1[0]);
		_exit(0);

	}
	else
	{
		close(arr[1]);    //close write end
		int str[2];
		read(arr[0],str,8);    //read pipe
		int res = str[0] + str[1];
		printf("parent sum :%d\n",res);
		close(arr[0]);          //close read end
		
		close(arr1[0]);        //close read end
		write(arr1[1],&res,sizeof(int));  //write
		close(arr1[1]);          //close write end
					 
	}
	int s;
	wait(&s);
}
