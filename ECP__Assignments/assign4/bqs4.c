#include<stdio.h>

int nthterm_fibo(int n){
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else
		return nthterm_fibo(n-1) + nthterm_fibo(n-2);
}

//for B part of ques 
void printterm_rec(int terms,int a,int b,int count ){
	if (count ==terms)//base case
		return ;

printf("%d",a);
printterm_rec(terms ,b,a+b,count +1);

}


int main()
{
	int n,terms;

	printf("enter a number :\n");
	scanf("%d",&n);
	printf("nth term of fibonacci series is %d\n",nthterm_fibo(n));


//print series(B part)
	printf("enter number of terms to print:\n");
	scanf("%d",&terms);
	printf("Fibonacci series (%d terms): \n",terms);
	printterm_rec(terms,0,1,0);
	return 0;
}

