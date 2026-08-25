#include<stdio.h>
#include<string.h>
char *rem_ch(char *str,const char ch)
{
	char str2[50];
	int i=0,j=0;
	while(str[i] != '\0')
	{
		if(str[i] != ch)
		{
			str2[j++] = str[i] ;
		}
		i++;

	}
	str2[j] = '\0';
	strcpy(str,str2);
	return str;
}

int main()
{
	char str[50];
	printf("Enter a string : ");
	scanf("%s",str);
	char ch;
	printf("Enter a character to delete : ");
	scanf("%*c%c",&ch);
 	rem_ch(str,ch);
	printf("The string after removing characters : %s\n",str);
}

