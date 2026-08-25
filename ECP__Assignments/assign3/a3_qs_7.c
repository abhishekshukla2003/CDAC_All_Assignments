#include<stdio.h>

int main() {
    int num, i = 1;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Unique factor pairs of %d are:\n", num);

    
    while (i * i <= num) {
        if (num % i == 0) {
            printf("%d x %d\n", i, num / i);
        }
        i++;
    }

    return 0;
}

