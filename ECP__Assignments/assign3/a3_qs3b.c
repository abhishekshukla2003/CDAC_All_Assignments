#include<stdio.h>

int main(){
	int num;
	printf("Enter a number :\n");
	scanf("%d",&num);
	
	int rev = 0;
	 while (num != 0) {
           int digit = num % 10;          
             rev = rev * 10 + digit;    
              num /= 10;                 
           }
         printf("Reversed number = %d\n", rev);
	}

