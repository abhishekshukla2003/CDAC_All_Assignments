#include<stdio.h>

void print_bin_rec(int);


int main()

{
	int num =10;
	print_bin_rec(num);
	printf("\n");

	return 0;
}
 void print_bin_rec(int num)
{
	if (num>1)
		print_bin_rec(num/2);
	printf("%d",num%2);

}
