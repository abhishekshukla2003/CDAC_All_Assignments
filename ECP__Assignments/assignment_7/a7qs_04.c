
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50   // Maximum length of each name


char **acceptNames(int n) {
    char **names = (char **)malloc(n * sizeof(char *));
    if (names == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        names[i] = (char *)malloc(MAX_LEN * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    return names;
}


void printNames(char **names, int n) {
    printf("\nList of Student Names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
}


void sortNames(char **names, int n) {
    char temp[MAX_LEN];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nNames sorted successfully!\n",sortNames(names, n));
}

// Function to free memory
void freeNames(char **names, int n) {
    for (int i = 0; i < n; i++) {
        free(names[i]);
    }
    free(names);
}

int main() {
    char **names = NULL;
    int n = 0, choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Accept Names\n");
        printf("2. Print Names\n");
        printf("3. Sort Names\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (names != NULL) {
                    freeNames(names, n);  
                }
                printf("Enter number of students: ");
                scanf("%d", &n);
                names = acceptNames(n);
                break;

            case 2:
                if (names == NULL) {
                    printf("No names available! Please enter names first.\n");
                } else {
                    printNames(names, n);
                }
                break;

            case 3:
                if (names == NULL) {
                    printf("No names available! Please enter names first.\n");
                } else {
                    sortNames(names, n);
                }
                break;

            case 4:
                if (names != NULL) {
                    freeNames(names, n);
                }
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}

