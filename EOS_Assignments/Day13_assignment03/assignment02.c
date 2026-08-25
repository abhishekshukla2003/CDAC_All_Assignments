#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<pthread.h>
void *thread_func(void *param)
{   
	//param = arr; 
	int *arr = (int *) param;
	for(int i=0;i<=9;i++)
	{ 
		for(int j=i+1;j<=9;j++)
		{
			if(arr[i] > arr[j])                  
			{                                                          //TYPE CAST refer 
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	pthread_t tid;
	int arr[10];
	printf("Enter 10 numbers: \n");
	for(int i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	pthread_create(&tid,NULL,thread_func,arr);
	pthread_join(tid,NULL);
	for(int i=0;i<=9;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\b\n");

}
