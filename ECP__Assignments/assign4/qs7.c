#include<stdio.h>


void fibonacci(int n){

	printf("Fibonacci series ;\n");
int temp,res,next=1,num=0;

for(int i=1;i<=n;i++)
{
	printf("%d",num);
	temp = num+next;
	num =next;
	next=temp;


}
printf("\n");
}

int main()

{
	int res;
	printf("enter the number of terms :\n");
	scanf("%d",&res);
	
	fibonacci(res);


	return 0;

}


