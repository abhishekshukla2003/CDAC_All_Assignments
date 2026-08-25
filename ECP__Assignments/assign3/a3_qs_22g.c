#include <stdio.h>

int main() {
    int i, j, k;
    int n = 3;   
    char start;

    
    for (i = 0; i <= n; i++) {
       
        for (k = 0; k < (n - i) * 2; k++)
            printf(" ");

        start = 'G' - 2 * i; 

        
        for (j = start; j <= 'G'; j++)
            printf("%c ", j);

      
        for (j = 'G' - 1; j >= start; j--)
            printf("%c ", j);

        printf("\n");
    }

    
    for (i = n - 1; i >= 0; i--) {
        
        for (k = 0; k < (n - i) * 2; k++)
            printf(" ");

        start = 'G' - 2 * i;

        
        for (j = start; j <= 'G'; j++)
            printf("%c ", j);

      
        for (j = 'G' - 1; j >= start; j--)
            printf("%c ", j);

        printf("\n");
    }

    return 0;
}

