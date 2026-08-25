#include<stdio.h>
size_t mstrlen(const char* str);
char* mstrcpy(char *dest, const char *src);
char* strcat(char *dest, const char *src);
int strcmp(const char *str1, const char *str2);
int stricmp(const char *str1, const char *str2);
char* strrev(char* str);
char* strchr(const char *str, int ch);
char* strstr(const char *str, const char *substr);
int main()
{
	char str1[20] = "Aashik";
	char str2[20] = "mekala";
	char str3[20];
	char str4[10]="hello";
	char str5[10]="HELLO";
	int len = mstrlen(str1);
	printf("The length of string is : %d\n",len);
	mstrcpy(str3,str2);	
	printf("The copy function : %s\n",str3);
 
	strcat(str3,str1);
	printf("concatination function : %s\n",str3);
	int res=strcmp(str3,str1);
	printf("Comparision of two strings: %d\n",res);
	int resi=stricmp(str4,str5);
	printf("The comparision ignoring case sensitive : %d\n",resi);
	printf("String reverse : %s\n",strrev(str4));
	char *ptr = strchr(str4,'l');
	printf("Character search : %p\n",ptr);
	char *ptr1 = strstr(str5,"HELL");
	printf("String search : %p\n",ptr);

	return 0;
}


size_t mstrlen(const char* str)
{
	int count = 0;
	for(int i=0;i<str[i] != '\0';i++)
	{
		count++;
	}
	return count;
}
char * mstrcpy(char *dest,const char *src)
{
	for(int i=0;src[i] != '\0';i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
char* strcat(char *dest,const char *src)
{
	int j=0;
	for(j;dest[j] != '\0';j++);
	for(int i=0;src[i] != '\0';i++)
	{
		dest[i+j] = src[i];
	}
	return dest;
}
int strcmp(const char *str1, const char *str2)
{
	int i=0;
	while(str1[i] != '\0' && str2[i] != '\0')
	{
		if(str1[i] != str2[i])
		{
			return str1[i]-str2[i];
		}
	}
	return str1[i]-str2[i];
}
int stricmp(const char *str1, const char *str2)
{
	int i=0;
	while(str1[i] != 0 && str2[i] != 0)
	{
		if(str1[i] >= 'A' && str1[i] <= 'Z')
		{
			if(str1[i] != str2[i] && str1[i] != str2[i]-32)
			{
				return str1[i]-str2[i];
			}
		}
		else if(str1[i] >= 'a' && str1[i] <= 'z')
		{
			if(str1[i] != str2[i] && str1[i] != str2[i]+32)
			{
            	return str1[i]-str2[i];
			}
		}
		else
		{
			if(str1[i] != str2[i])
			{
				return str1[i]-str2[i];
			}
		}
		i++;
	}

	return str1[i]-str2[i];
}

char* strrev(char* str)
{
	int i=0;
	int j=0;
	for(j;str[j] != '\0';j++);
	int k=j-1;
	for(i,k;i<j/2;i++,k--)
	{
		char temp = str[i];
		str[i] = str[k];
		str[k]=temp;
	}
	return str;
}
char* strchr(const char *str, int ch)
{
	int i=0;
	while(str[i] != 0)
	{
		if(str[i] == ch)
		{
			return (char *)&str[i];
		}
		i++;
	}
	return NULL;
}
char* strstr(const char *str, const char *substr)
{
	int i=0;
	while(str[i] != 0)
	{
		int j=0;
		while(substr[j] != 0 && str[i+j] == substr[j])
		{
			j++;
		}
		if(substr[j] == '\0')
		{
			return (char *)&str[i];
		}
		i++;
	}
	return NULL;
}
		
