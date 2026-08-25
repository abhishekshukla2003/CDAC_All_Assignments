#include<stdio.h>

int main()
{
	int n1,n2,n3,res;
	printf("Enter first  number:\n");
	scanf("%d",&n1);
	printf("Enter second number:\n");
	scanf("%d",&n2);
	printf("Enter third number:\n");
	scanf("%d",&n3);

	res =( n1 +n2 +n3)/3;
	printf("Average of the given number is %d\n",res);


	return 0;
}
