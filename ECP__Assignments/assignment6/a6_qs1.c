#include<stdio.h>
#include<string.h>
void strrev(char *str,int size)
{
	for(int i=0,j=size-1;i<size/2;i++,j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
int stricmp(char *str1,char *str2)
{
	int i=0;
	while(str1[i] != '\0' && str2[i] != '\0') 
	{
		if(str1[i] >= 97 && str1[i] <= 122)
		{
			if(str1[i]-32 != str2[i] && str1[i] != str2[i]) 
			{
				return str1[i]-str2[i];
			}
		}
		else if(str1[i] >= 65 && str1[i] <= 90)
		{
			if(str1[i]+32 != str2[i] && str1[i] != str2[i])
			{
				return str1[i]-str2[i];
			}
		}
		else 
		{
			if(str1[i] !=  str2[i])
			{
				return str1[i]-str2[i];
			}
		}
		
		i++;
	}
	return str1[i]-str2[i];
}
	

int main()
{
	char str1[20] = "Aashik";
	char str2[20] = "Mekala";
	char str3[20];
	int len = strlen(str1);
	printf("The length of string using strlen is %d\n",len);
	strcpy(str3,str2);
	printf("The String copy using strcpy:  %s\n",str3);
	strcat(str3,str1);
	printf("The concat operation using strcat: %s\n",str3);


	int cmp = strcmp(str1,str2);
	printf("Comparing and returning result (<0/>0/=0) thrugh strcmp : %d\n",cmp);
	int icmp = stricmp(str1,str2);
	printf("Comparing and returning result by ignoring cases (<0/>0/=0) thrugh strcmp : %d\n",cmp);
	int len1 = strlen(str3);
	strrev(str3,len1);
	printf("The reversed string of str3 : %s\n",str3);
	strrev(str3,len1);
	printf("Searching for a character and returing its base address %p\n",strcmp(str3,"h"));
		
	printf("Searching for a substring and returing its base address %p\n",strstr(str3,str1));
    strncpy(str3,str1,3);
	printf("Coping n terms from destinatiom string to source string %s\n",str3);
    strncat(str3,str1,3);
	printf("Concating n terms from destinatiom string to source string %s\n",str3);
	int ncmp = strncmp(str1,str2,3);
	printf("Comparing n terms and returning result (<0/>0/=0) thrugh strncmp : %d\n",ncmp);

	char str[30] = "Aashik is a student";
	printf("OPERATION strtok() %s\n",strtok(str," "));
	printf("OPERATION strtok() %s\n",strtok(NULL," "));
	printf("OPERATION strtok() %s\n",strtok(NULL," "));
	printf("OPERATION strtok() %s\n",strtok(NULL," "));
	return 0;
}

