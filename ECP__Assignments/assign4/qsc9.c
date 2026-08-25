#include<stdio.h>

int calculator(int ,int,int,int *);

int main()
{

	int  n1,n2,n3,flag=0;
	printf("Enter first number :\n");
	scanf("%d",&n1);

	printf("Enter second number :\n");
	scanf("%d",&n2);

	printf("Choose :\n1.Addition \n2.Subraction \n3.Multiplication \n4.Division :\n");

	scanf("%d",&n3);
	
	int res = calculator(n1,n2,n3,&flag);

	if (flag ==0)
		printf("res = %d\n",res);
	else
		printf("Error : Denominator cannot be zero\n");

	return 0;
}
int calculator (int num1 ,int num2,int choose,int *pflag)
{

	switch (choose){
	case 1: 
		return num1 +num2;
	case 2:
			return num1-num2;
	case 3:
			return num1 *num2;
	case 4:
			if(num2 ==0)
				*pflag=1;
			else 
				return num1/num2;
			break;
	}

}

