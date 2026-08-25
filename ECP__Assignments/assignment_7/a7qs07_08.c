#include <stdio.h>
#include <string.h>

void printNames(char *names[], int n) {
    printf("\nList of Names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
}

void sortNames(char *names[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((ascending && strcmp(names[i], names[j]) > 0) ||
                (!ascending && strcmp(names[i], names[j]) < 0)) {
                char *temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Hi my name is abhishek shukla !\n");
        return 1;
    }

    int n = argc - 1;   
    char *names[n];     

    for (int i = 0; i < n; i++) {
        names[i] = argv[i + 1];
    }

    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Display Names (Original Order)\n");
        printf("2. Display Names in Ascending Order\n");
        printf("3. Display Names in Descending Order\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printNames(names, n);
                break;

            case 2:
                sortNames(names, n, 1);
                printNames(names, n);
                break;

            case 3:
                sortNames(names, n, 0);
                printNames(names, n);
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

