#include <stdio.h>


int binomialCoeff(int n, int r) {
    int res = 1;
    if (r > n - r)  
        r = n - r;

    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        
        for (j = 0; j < n - i - 1; j++)
            printf("  ");

        
        for (j = 0; j <= i; j++) {
            printf("%4d", binomialCoeff(i, j));
        }
        printf("\n");
    }

    return 0;
}

