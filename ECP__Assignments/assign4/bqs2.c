#include<stdio.h>
#include<math.h>
int power_rec(int base,int index);



int main()
{
int base,index;
printf("Enter base and index ;");
scanf("%d %d",&base ,&index);

int pow = power_rec(base,index);
printf("%d ^ %d=%d\n",base,index,pow);

	return 0;
}



int power_rec(int base,int index)
{
	if (index ==0)
	{
		return 1;
	}
	else if (index ==1)
	{
		return base;
	}

	else
		return base * power_rec(base,index - 1);
}
