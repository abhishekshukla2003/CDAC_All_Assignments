#include<stdio.h>

int calculate(int op1,int op2,int *product)
{
	*product= op1 * op2;
	return op1+op2;


}
int main(void)
{
	int num1=10,num2=2;
	int sum;
	int product;

	sum = calculate(num1,num2,&product);

	printf("%d + %d = %d\n",num1,num2,sum);
	printf("%d * %d = %d\n",num1,num2,product);

	return 0;
}
