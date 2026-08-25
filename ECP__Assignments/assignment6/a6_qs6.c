#include<stdio.h>
char* itoa(int n,char *str)
{
	int rem=0;
	int i=0;
	while(n != 0)
	{
		rem = n%10;
		str[i] = rem + '0';
		n /= 10;
		i++;
	}
	str[i] ='\0';
	for(int k=0,j=i-1;k<=(i-1)/2;k++,j--)
	{   
		char temp = str[k];
		str[k]=str[j];
		str[j]=temp;
	}
	return str;

}
		

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	char str[50];
	char *res = itoa(n,str);
	printf("Result = %s\n",res);
}
