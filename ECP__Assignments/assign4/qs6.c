#include<stdio.h>

int factorial(int n){
	int fact =1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}

int nCr(int n,int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));

}

void paskaltriangle(int n){


	for (int i=0;i<n;i++)

	{
		for (int k =0;k<n-i-1 ;k++)
		{
			printf("  ");

		}
		for (int j =0;j<=i;j++)
		{
			printf("%4d",nCr(i,j));


		}
			printf("\n");


	}
}


int  main()

{

int n;
printf("Enter the number of rows :\n");
scanf("%d",&n);

paskaltriangle(n);
return 0;
}

