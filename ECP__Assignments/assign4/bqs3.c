#include<stdio.h>

int gcd_rec(int a,int b){
if (b==0)
	return a;
return gcd_rec(a,a%b);


}



int main()

{  

int num1,num2;

printf("enter first number :\n");
scanf("%d",&num1);

printf("Enter second number :\n");
scanf("%d",&num2);

printf("GCD of these numbers is %d\n ",gcd_rec(num1,num2));

	return 0;
}


