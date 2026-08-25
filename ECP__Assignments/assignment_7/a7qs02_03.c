#include <stdio.h>
#include <stdlib.h>


void accept2DArray(int **arr, int rows, int cols) {
    int i, j;
    printf("Enter elements of %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}


void print2DArray(int **arr, int rows, int cols) {
    int i, j;
    printf("Matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int **arr;
    int rows, cols, i, choice;
    int initialized = 0;  

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    
    arr = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    do {
        printf("\n--- MENU ---\n");
        printf("1. Accept 2D Array\n");
        printf("2. Display 2D Array\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                accept2DArray(arr, rows, cols);
                initialized = 1;
                break;
            case 2:
                if (initialized)
                    print2DArray(arr, rows, cols);
                else
                    printf("Please accept the array first!\n");
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    
    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

