#include <stdio.h>

// Function to calculate integer power
int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int num, temp, rem, digits, sum, i;

    printf("Armstrong numbers between 1 and 500 are:\n");

    // Loop through all numbers from 1 to 500
    for (num = 1; num <= 500; num++) {
        temp = num;
        digits = 0;
        sum = 0;

        // Count digits using for loop
        for (i = temp; i > 0; i = i / 10) {
            digits++;
        }

        // Calculate sum of digits^digits using for loop
        for (i = temp; i > 0; i = i / 10) {
            rem = i % 10;
            sum += power(rem, digits);
        }

        // Check Armstrong condition
        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

