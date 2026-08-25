#include<stdio.h>

int main()
{
int num;
char ch;


printf("Enter a charecter :\n");
scanf("%c",&ch);

 printf("Enter a number:\n");
 scanf("%d",&num);

while(num >0)
{
printf(" %c",ch);
num--;

}
printf("\n");

return 0;

}
