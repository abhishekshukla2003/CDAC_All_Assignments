#include<stdio.h>


int main()
{
	int num,n1=1;
	printf("Enter a number ;\n");
	scanf("%d",&num);

	while(n1<=10)
	{
		
		printf("%d* %d = %d\n",num,n1,num*n1);
		n1++;


	}
	return 0;
}
