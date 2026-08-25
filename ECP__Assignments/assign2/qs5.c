#include<stdio.h>

int main()
{
	int n1,n2,n3;
	int max;
	printf("enter first number :\n");
	scanf("%d",&n1);

	printf("enter second number :\n");
	scanf("%d",&n2);

	printf("enter third number :\n");
	scanf("%d",&n3);

// by conditional operator....
	max =(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
	printf("the greater number is %d\n",max);
/*	if (n1>n2 && n1>n3)

	
	{
		printf("%d is greater\n",n1);

	}
	else if(n2>n3 && n2>n1)

	{
		printf("%d is greater\n",n2);
	}
	else
	{
		printf("%d is greater\n",n3);
	}
*/

	return 0;
}
