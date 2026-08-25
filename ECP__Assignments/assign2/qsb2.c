#include <stdio.h>

int main() {
    int n1, n2;
    float res;

    printf("Enter the 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    // Defining enum with typedef
    typedef enum choice { ADD = 1, SUB = 2, MUL = 3, DIV = 4 } CHOICE;

    CHOICE s1;
    printf("\n1. ADD\n2. SUB\n3. MUL\n4. DIV\n");
    printf("Enter your choice: ");
    scanf("%d", &s1);

    switch (s1) {
        case ADD:
            res = n1 + n2;
            printf("Result = %.2f\n", res);
            break;

        case SUB:
            res = n1 - n2;
            printf("Result = %.2f\n", res);
            break;

        case MUL:
            res = n1 * n2;
            printf("Result = %.2f\n", res);
            break;

        case DIV:
            if (n2 == 0) {
                printf("Cannot divide by zero!\n");
            } else {
                res = (float)n1 / n2;
                printf("Result = %.2f\n", res);
            }
            break;

        default:
            printf("Wrong choice....\n");
            break;
    }

    return 0;
}

