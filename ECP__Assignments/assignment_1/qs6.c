#include<stdio.h>


int main()

{
	int n1;
	int i;
	printf("enter a number:\n");
	scanf("%d",&n1);

	while(i<10)
	{
	++i;
	printf("%d * %d = %d\n",n1,i,n1*i);
	}


	return 0;
}

