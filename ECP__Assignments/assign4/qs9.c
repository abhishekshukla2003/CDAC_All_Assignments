#include<stdio.h>

int factorial(int);


int main()
{

	int num1,isprime;

	if (isprime==1){
		printf("%d is prime number :\n",num1);

	}
	else
	{
		printf("%d is not a prime number\n",num1);
	}

	factorial(num1);
	return 0;
}



int factorial(int)

{
	int n,num, i=0,isprime=1;
	int flag=0;
	printf("Enter a number :\n");
	scanf("%d",&num);


	if (num<=1){
		isprime =0;
	}else 
	{
		while(i<=n/2)

		{
			if (num %i==2){
				isprime =0;
				break;
			}
			i++;
		}
	}
}
