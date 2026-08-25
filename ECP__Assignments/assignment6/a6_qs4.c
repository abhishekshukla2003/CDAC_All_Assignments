#include<stdio.h>
#include<string.h>
char* str_rem(char *str1,const char *str2)
{
	char str3[50];
	int k =0;
	for(int i=0;str1[i] != '\0';i++)
	{
		int remove =0;
		for(int j=0;str2[j] != '\0';j++)
		{
			if(str1[i] == str2[j])
			{
				remove=1;
				break;
			}
		}
		if(!remove)
		{
			str3[k++]=str1[i];
		}
	}
		str3[k]='\0';
		strcpy(str1,str3);
	return str1;
}
int main()
{
	char str1[50];
	char str2[10];
	printf("Enter a string: ");
	scanf("%[^\n]s",str1);
	printf("Enter a string to delete characters in 1st string:  ");
	scanf("%s",str2);
	char *str=str_rem(str1,str2);
	printf("The string : %s",str);
	return 0;
}
