#include<stdio.h>

int main()
{
	int num,n1,n2,n3,n4;
	printf("enter a 4 digit number :\n");
	scanf("%d",&num);

	if (num<1000 ||num > 9999 )
	{
		printf("Please enter a valid number :");
		return 1;
	}

    n1 = num/1000;
	n2 = (num/100)%10;
	n3 = (num/10)%10;
	n4 = num%10;

	printf("\nDigit\tface value\tplace value\n");
	printf("----------------------------------------\n");

	printf("%d\t %d\t     %d\t\n",n1,n1,n1*1000);
	
	printf("%d\t %d\t     %d\t\n",n2,n2,n2*100);
	printf("%d\t %d\t     %d\t\n",n3,n3,n3*10);
	printf("%d\t %d\t     %d\t\n",n4,n4,n4);

	return 0;
}

