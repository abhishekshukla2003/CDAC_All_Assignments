#include <stdio.h>



int main() {
    int num;
    int res;   // define once


    printf("Enter a quantity :\n");
    scanf("%d", &num);


    if (num < 0) {
        printf("Negative quantity is not allowed.\n");
    }
    else if (num < 50) {
        res = num * 5;
        int discount = res - (res * 10 / 100);   
        printf("Total price of the quantity is %d\nDiscounted price of quantity is %d\n",res, discount);
    }
    else {  
        res = num * 5;
        int discount1 = res - (res * 15 / 100);  
        printf("Total price of the quantity is %d\nDiscounted price of the quantity is %d\n",res, discount1);
    }

    return 0;
}
