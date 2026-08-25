#include <stdio.h>

int main() {
    int num, i, isPrime = 1; 

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num <= 1) {
        printf("%d is NOT a prime number.\n", num);
        return 0;
    }

    
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;  
            break;
        }
    }

   
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}

