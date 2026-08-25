#include<stdio.h>

int main()
{
	int n1,n2;
	int max;
	printf("Enter first  number :\n");
	scanf("%d",&n1);
	printf("enter second number:\n");
	scanf("%d",&n2);

	max = (n1>n2)?  n1:n2;

	printf("Greater value is %d\n",max);
/*	if (n1>n2 )
	{
		printf("%d is greater\n",n1);
	}
	else
	{
		printf("Greater number is %d\n",n2);
	}
*/


	return 0;
}
