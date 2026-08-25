#include<stdio.h>


int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    //part C. Check leap year condition using conditional statement
   ( (year % 400 == 0) || ((year % 4 == 0) && (year % 100!= 0)))
	?  printf("%d is a leap year.\nNumber of days =366\n", year)
	:   printf("%d is not a leap year \n.Number of days = 365\n",year);
  

	return 0;
}
