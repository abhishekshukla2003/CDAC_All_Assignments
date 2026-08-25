#include<stdio.h>


int main(){
	int num,digit,res=0;
	printf("Enter a number :\n");
	scanf("%d",&num);
		
	while(num!=0){
		digit = num%10;
	 	 res +=digit;
			num/=10;;

	}
		printf("Sum of the digit is %d\n",res);




	return 0;
}
