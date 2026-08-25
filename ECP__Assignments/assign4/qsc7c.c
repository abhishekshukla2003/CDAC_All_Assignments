#include<stdio.h>

int sum,prod;

void calculate(int num1,int num2);

int main ()
{

	int num1,num2;


	printf("Enter first num :\n");
	scanf("%d",&num1);

	printf("Enter second num :\n");
	scanf("%d",&num2);

	calculate(num1,num2);
	printf("Sum = %d\n",sum);
	printf("Product = %d\n",prod);


	return 0;
}
void calculate(int num1,int num2)
{
	sum = num1+num2;
	prod = num1*num2;

}
