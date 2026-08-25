#include <stdio.h>

int main() {
    int num, a1;
    int rev = 0, temp, remainder;

    printf("Enter a 5 digit number:\n");
    scanf("%d", &num);

    a1 = num;  

    
    while (num != 0) {
        remainder = num % 10;          
        rev = rev * 10 + remainder;    
        num = num / 10;               
    }

    
    if (a1 == rev) {
        printf("Number is palindrome\n");
    } else {
        printf("Number is not palindrome\n");
    }

    return 0;
}
