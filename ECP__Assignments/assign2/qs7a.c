#include<stdio.h>


int main() {
    int num;
    printf("Enter a year :\n");
    scanf("%d", &num);

    if (num % 400 == 0) {
        printf("%d is a leap year :\n", num);
        printf("Number of days = 366\n");
    }
    else if (num % 100 == 0) {
        printf("%d is not a leap year :\n", num);
        printf("Number of days = 365 \n");
    }
    else if (num % 4 == 0) {  
        printf("%d is a leap year :\n", num);
        printf("Number of days = 366\n");
    }
    else {
        printf("%d is not a leap year :\n", num);
        }
	return 0;
}
