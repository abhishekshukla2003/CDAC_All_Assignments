#include<stdio.h>

int leapyear(int);
	

int main()

{
int n;
printf("Enter a year :\n");
scanf("%d",&n);

leapyear(n);

return 0;
}


int leapyear(int n)
{
	if (n%400==0 && n%4==0 )
		{
			printf("this is leap year ;\n");
		}
	else if(n%100==0)
		{
			printf("this year is not leap year :\n");

		}
	else{
		printf("this is leap year :\n");
	}
	}

