#include <stdio.h>

int main() {
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);

    //part B. Check leap year condition using logical operator
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
        printf("Number of days = 366\n");
    } else {
        printf("%d is not a leap year.\n", year);
        printf("Number of days = 365\n");
    }

    return 0;
}

