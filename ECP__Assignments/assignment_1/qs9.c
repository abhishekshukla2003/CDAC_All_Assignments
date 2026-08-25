#include <stdio.h>

int main() {
    int choice;
    float num, res;


    printf("Enter your choice (1 or 2):\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
  
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &num);
        res = (5.0/9.0) * (num - 32);
        printf("Temperature in Celsius = %.2f\n", res);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &num);
        res = (num * 1.8) + 32;
        printf("Temperature in Fahrenheit = %.2f\n", res);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
