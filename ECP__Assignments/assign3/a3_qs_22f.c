#include <stdio.h>

int main() {
    int i, j;
    int n = 4; 

    for (i = 0; i < n; i++) {
        char ch = 'A' + i; 
        for (j = ch; j <= 'D'; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}

