#include <stdio.h>

int main() {
    int base, index, i;
    long long result = 1;   

   
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter index (exponent): ");
    scanf("%d", &index);

    
    if (index < 0) {
        printf("Negative exponent is not allowed:\n");
    } else {
        for (i = 1; i <= index; i++) {
            result = result * base;
        }
        printf("%d ^ %d = %lld\n", base, index, result);
    }

    return 0;
}

