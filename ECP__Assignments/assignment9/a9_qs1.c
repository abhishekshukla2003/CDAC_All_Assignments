#include<stdio.h>
int main()
{
	//1.open file in read mode....
	//FILE is a structure
	FILE *fp = fopen("file.txt","r");
	char ch;
	printf("File content : ");
	while((ch = fgetc(fp)) != EOF)
	{
		printf("%c",ch);
	}
	printf("\n");
	fclose(fp);
}



