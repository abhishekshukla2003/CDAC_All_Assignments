#include<stdio.h>
void myfwrite(FILE *fp1,FILE *fp2)
{
	char ch;
	FILE *temp = fp2;
	while((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch,fp2);
	}
	rewind(fp2);
	printf("Contents in file 2: ");
	while((ch = fgetc(temp)) != EOF)
	{
		printf("%c",ch);
	}
	printf("\n");
}
int main()
{
	FILE *fp1 = fopen("file.txt","r");
	FILE *fp2 = fopen("file2.txt","w+");
	myfwrite(fp1,fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
