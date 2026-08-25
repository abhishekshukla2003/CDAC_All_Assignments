#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;
    
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }
    
   
    a = num1;
    b = num2;
    
    
    while (b != 0) {
        temp = b;     
        b = a % b;    
        a = temp;      
    }
    
    
    printf("GCD of %d and %d is %d\n", num1, num2, a);
    
    return 0;
}
