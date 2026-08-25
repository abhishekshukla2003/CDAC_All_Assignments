#include <stdio.h>
#include <stdlib.h>

// Function to accept elements of array
void acceptArray(int arr[], int n) {
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to print array
void printArray(int arr[], int n) {
    int i;
    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to sort array using Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted successfully!\n");
}

// Linear search returning index
int linearSearchIndex(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // return index
        }
    }
    return -1; // not found
}

// Linear search returning address
int* linearSearchAddress(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return &arr[i];  // return address
        }
    }
    return NULL; // not found
}

// Function for binary search (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, *arr, choice, key, index;
    int *address;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    acceptArray(arr, n);

    do {
        printf("\nMenu:\n");
        printf("1. Print Array\n");
        printf("2. Sort Array (Bubble Sort)\n");
        printf("3. Linear Search (Return Index)\n");
        printf("4. Binary Search (Array must be sorted)\n");
        printf("5. Linear Search (Return Address)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printArray(arr, n);
                break;

            case 2:
                bubbleSort(arr, n);
                break;

            case 3:
                printf("Enter number to search: ");
                scanf("%d", &key);
                index = linearSearchIndex(arr, n, key);
                if (index != -1)
                    printf("Element %d found at index %d\n", key, index);
                else
                    printf("Element %d not found!\n", key);
                break;

            case 4:
                printf("Enter number to search: ");
                scanf("%d", &key);
                index = binarySearch(arr, n, key);
                if (index != -1)
                    printf("Element %d found at index %d\n", key, index);
                else
                    printf("Element %d not found!\n", key);
                break;

            case 5:
                printf("Enter number to search: ");
                scanf("%d", &key);
                address = linearSearchAddress(arr, n, key);
                if (address != NULL)
                    printf("Element %d found at address %p\n", key, (void*)address);
                else
                    printf("Element %d not found!\n", key);
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    free(arr); // free allocated memory
    return 0;
}

