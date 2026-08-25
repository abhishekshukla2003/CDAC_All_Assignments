#include<stdio.h>

void charecter(char c,int n)
{
	for(int i=0 ; i<n ;i++){
		printf(" %c",c);
	}
	printf("\n");

}


int main()
{

char ch1;
int num;

printf("enter a charecter :\n");
scanf("%c",&ch1);

printf("enter how many times you want to print\n");
scanf("%d",&num);


charecter(ch1,num);


	return 0;
}


