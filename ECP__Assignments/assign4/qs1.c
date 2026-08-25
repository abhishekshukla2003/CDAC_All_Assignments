#include<stdio.h>


int factorial(int n){

	if(n<0)
	{
		printf("Factoarial of negative number is not possible :\n");
	}
	int result=1;
	for (int i =1;i<=n;i++)
	{
		result*=i;
	}
		return result;

}

int main()
{
	int num =5;
	int fact = factorial(num);
	if (fact != 0){
		printf("factorial of %d is %d\n",num,fact);
	}
	return 0;
}
