#include <stdio.h>

int main() {
    int start, end, i, j;

    
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid range! Start should be <= End.\n");
        return 0;
    }

    printf("\nMultiplication Tables from %d to %d\n\n", start, end);

  
    for (j = 1; j <= 10; j++) {
        
        for (i = start; i <= end; i++) {
            printf("%2d x %2d = %3d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

