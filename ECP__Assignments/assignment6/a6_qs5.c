#include<stdio.h>
int atoi(char *str)
{
	int d=0,p = 0;
	for(int i=0;str[i] != '\0';i++)
	{
		d=str[i] - '0';
		d = (p*10) + d;
		p = d;
	}
	return p;
}
		

int main()
{
	char str[50];
	printf("Enter a string: ");
	scanf("%s",str);
	int res = atoi(str);
	printf("Result = %d\n",res);
}
