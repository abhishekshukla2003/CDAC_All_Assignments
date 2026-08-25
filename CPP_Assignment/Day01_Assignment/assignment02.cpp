#include<stdio.h>

struct time
{
	int hr;
	int min;
	int sec;

	void initTime()
	{
		hr =0;
		min =0;
		sec =0;
	}
	void acceptTime()
	{
		printf(" Enter time :\n");
		scanf("%d%d%d",&hr,&min,&sec);
	}

	void DisplayTime()
	{
		printf("\n time = %d : %d : %d\n",hr,min,sec);

	}
	void incrementTimeby1min()
	{
		min++;
		if(min >= 60)
		{
			min = 0;
			hr++;
		}
		if(hr >= 24)
			hr =0;

	}
};

int main()
{
	time t1;
	t1.initTime();
	t1.acceptTime();
	t1.DisplayTime();
	t1.incrementTimeby1min();

	return 0;
}
