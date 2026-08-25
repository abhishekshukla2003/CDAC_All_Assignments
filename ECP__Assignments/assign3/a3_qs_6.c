#include<stdio.h>

int main() {
    int num, i = 1;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d (excluding itself):\n", num);

   
    while (i <= num / 2) {   
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}

