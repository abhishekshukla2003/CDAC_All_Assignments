#include <stdio.h>



int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
    int num, count = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("First 5 prime numbers after %d are:\n", num);

    
    for (int i = num + 1; count < 5; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n");
    return 0;
}

