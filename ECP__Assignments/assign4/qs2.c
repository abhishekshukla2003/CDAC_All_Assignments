#include<stdio.h>

int accept (void);
int power(int,int);

void print(int res);

void print(int res)

{
	printf("result = %d",res);

}


int main()
{

int base,index, power1;
base =accept();
index = accept();
power1 =power(base,index);

print(power1);


	return 0;

}

int power(int b,int i){
	int j,res=1;
	for (j=1;j<=i;j++)

{

	res = res*b;

}
return res;
}

int accept(void)
{

		int n1;
		printf("Enter the base number then index :\n");
		scanf("%d",&n1);
		return n1;
}

