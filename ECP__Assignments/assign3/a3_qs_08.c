#include <stdio.h>

int main() {
    int num;
    
   
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
   
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    printf("Prime factors of %d are: ", num);
    
    
    int divisor = 2;
    while (num > 1) {
        if (num % divisor == 0) {
            
            printf("%d ", divisor);
            num = num / divisor; 
        } else {
            
            divisor++;
        }
    }
    printf("\n");
    
    return 0;
}
