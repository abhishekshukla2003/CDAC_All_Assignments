#include<stdio.h>

int main()



{
	float  n1,n2,res ;
	printf("enter first  number :\n");
	scanf ("%f",&n1);
	printf("enter second number :\n");
	scanf("%f",&n2);

	if (n2 ==0)
	{
		printf("Division by zero is invalid:");
	}
	else
	{
	 res= n1/n2;
	printf("Result is %f",res);

	}

	return 0;
}

