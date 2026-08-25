 #include <stdio.h>


 main() {
    int num, original, digit, sum = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;   

    
    while (num != 0) {
        digit = num % 10;         
        sum += digit * digit * digit;  
        num /= 10;                
    }

   
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }

    return 0;
}

