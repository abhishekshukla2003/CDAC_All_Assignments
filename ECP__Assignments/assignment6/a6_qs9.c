#include<stdio.h>
#include<string.h>
void rep(char *str1,char* str2,char *str3)
{
	char str[100];
	int j=0,k=0;
	for(int i=0;str1[i] != '\0';i++)
	{
		if(str1[i] != str2[j])
		{
			str[k++]=str1[i];
			j=0;
		}
		if(str1[i] == str2[j])
		{
			j++;

		}
		if(str2[j] == '\0')
		{
			for(int l=0;str3[l] != 0;l++)
			{
				str[k++] = str3[l];
			}
			j=0;
		}

	}
	str[k] = '\0';
	printf("The modified string is %s\n",str);

}
int main()
{
	char str1[50];
	printf("Enter a string : ");
	scanf("%[^\n]s",str1);
	char str2[50];
	printf("Enter a string to find : ");
	scanf("%s",str2);
	char str3[50];
	printf("Enter a string to replace : ");
	scanf("%s",str3);
	rep(str1,str2,str3);



	return 0;
}

