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


void printArray(int arr[], int n) {
    int i;
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n");
}

void reverseArray(int arr[],int n){
	int i,temp;
	for (i=0 ;i<n/2;i++){
		 temp = arr[i];
		 arr[i]=arr[n-1-i];
		 arr[n-1-i]=temp;
	}
	printf("Array reversed successfully !\n");


}

int findMaximum(int arr[], int n) {
    int i, max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// minimum element
int findMinimum(int arr[], int n) {
    int i, min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
// Function to remove duplicates and return new size
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int temp[n];  
    int i, j, k = 0;
    int isDuplicate;

    for (i = 0; i < n; i++) {
        isDuplicate = 0;
        for (j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[k++] = arr[i];
        }
    }

   
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    return k; 
}


int main() {
    int n, *arr,choice ;
	int initialized =0;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);

    arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
	free(arr);
    
do {
	
	printf("\n-----------choose ------\n");
	printf("1.Accept array elemnt :\n");

	printf("2.Print Array element :\n");
	printf("3.Reverse array elemnt:\n");
	printf("4.Maximum element is :\n");
	printf("5.Minimum element is :\n");
	printf("6.RemoveDuplicates  \n");
	printf("7.Exit \n");
	printf("Enter your choice :\n");
	scanf("%d",&choice);

	switch (choice) {
            case 1:
                acceptArray(arr, n);
                initialized = 1;
                break;
            case 2:
                if (initialized)
                    printArray(arr, n);
                else
                    printf("Please accept the array first!\n");
                break;
            case 3:
                if (initialized) {
                    reverseArray(arr, n);
					printArray(arr,n);
                } else {
                    printf("Please accept the array first!\n");
                }
                break;
			case 4:
				if(initialized){
					printf("Maximum element =%d\n",findMaximum(arr,n));
				}
					else{
					printf("Please accept the array first !\n");
			    	}
				break;
			case 5:
				if (initialized){
				printf("Minumum element = %d\n",findMinimum(arr,n));
				}
				else{
					printf("Please accept the array first !\n");
				}
				break;
            case 6:
				if(initialized){
					n= removeDuplicates (arr, n);
                printf("Duplicates removed .New array :\n");
		     	printArray(arr,n);
				printf("Number of unique element :\n",n);
				}
				else
				{
				printf("Please accept the array first!\n");
				}
               break;
			case 7:
			   printf("Exiting program :\n");

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
    
   
