#include <stdio.h>
#include <stdlib.h>


int **allocateMatrix(int rows, int cols) {
    int **matrix = (int **) malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            exit(1);
        }
    }
    return matrix;
}

void freeMatrix(int **matrix, int rows) {
    if (matrix == NULL) return;
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}


void inputMatrix(int **matrix, int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void printMatrix(int **matrix, int rows, int cols) {
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int **matrix = NULL;
    int rows = 0, cols = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Allocate Matrix\n");
        printf("2. Input Matrix\n");
        printf("3. Print Matrix\n");
        printf("4. Free Matrix\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (matrix != NULL) {
                    printf("Matrix already allocated. Free it first!\n");
                    break;
                }
                printf("Enter number of rows: ");
                scanf("%d", &rows);
                printf("Enter number of columns: ");
                scanf("%d", &cols);
                matrix = allocateMatrix(rows, cols);
                printf("Matrix allocated successfully!\n");
                break;

            case 2:
                if (matrix == NULL) {
                    printf("Matrix not allocated yet!\n");
                } else {
                    inputMatrix(matrix, rows, cols);
                }
                break;

            case 3:
                if (matrix == NULL) {
                    printf("Matrix not allocated yet!\n");
                } else {
                    printMatrix(matrix, rows, cols);
                }
                break;

            case 4:
                if (matrix == NULL) {
                    printf("Matrix not allocated yet!\n");
                } else {
                    freeMatrix(matrix, rows);
                    matrix = NULL;
                    printf("Matrix freed successfully!\n");
                }
                break;

            case 5:
                if (matrix != NULL) {
                    freeMatrix(matrix, rows);
                }
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

