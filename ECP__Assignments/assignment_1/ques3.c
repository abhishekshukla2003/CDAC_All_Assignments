#include<stdio.h>


int main()
{

	char ch1;
    int n1;
	printf("enter a character :\n");
	scanf("%c",&ch1);
	printf("decimal representation of this character is :%d\n",ch1);
	printf("octal representation of this character is : %o\n",ch1);
	printf("Hexa decimal representation of this character is: %x\n",ch1);

	printf("Choose a number between 65-92 or 97-122 :");
	scanf("%d",n1);
	printf("character of the chosen ASCII number is %c\n",n1); 

	return 0;

}
