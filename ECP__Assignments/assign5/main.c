#include<stdio.h>
#include"1.h"


int main() {
    int n, *arr;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

   
    arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL)
	{
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    acceptArray(arr, n);
    printArray(arr, n);

    free(arr);

    return 0;
}
