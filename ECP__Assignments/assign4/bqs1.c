#include<stdio.h>

int fact_rec(int);

int main()

{
	int num;
	printf("Enter a number :\n");
	scanf("%d",&num);

	int fact =fact_rec( num);
	printf("%d\n",fact);

	return 0;
}
int fact_rec(int num)
{
	if (num ==0 || num ==1)
		return 1;
	else
		return num*fact_rec(num-1);

}
