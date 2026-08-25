#include <stdio.h>

int main() {
    int i, j;

    printf("Multiplication Tables (1 to 10)\n\n");

    
    for (j = 1; j <= 10; j++) {
        
        for (i = 1; i <= 10; i++) {
            printf("%2d x %2d = %3d\t", i, j, i * j);
        }
        printf("\n");  
    }

    return 0;
}

