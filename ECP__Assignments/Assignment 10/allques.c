#include <stdio.h>
#include <stdlib.h>


int countOneBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}


void printBinary(unsigned int num) {
    int bits = sizeof(num) * 8;
    for (int i = bits - 1; i >= 0; i--) {
        putchar((num & (1U << i)) ? '1' : '0');
    }
    putchar('\n');
}


unsigned char ensureEvenParity(unsigned char byte) {
    int count = 0;
    unsigned char temp = byte;
    for (int i = 0; i < 8; i++) {
        count += temp & 1;
        temp >>= 1;
    }
    if (count % 2 != 0) {
        byte |= (1 << 7); 
    }
    return byte;
}



void xorWith32(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        char result = ch ^ 32;
        printf("Original: %c, XOR with 32: %c\n", ch, result);
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }
}


void swapUsingXOR(int *a, int *b) {
    if (a != b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}


int main() {
    int choice;

    do {
        printf("\n====== Bitwise Operations Menu ======\n");
        printf("1. Count number of '1' bits\n");
        printf("2. Display number in binary format\n");
        printf("3. Check even parity and set MSB if needed\n");
        printf("4. Check if character is alphabet and XOR with 32\n");
        printf("5. Swap two numbers using XOR\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                unsigned int num;
                printf("Enter an unsigned integer: ");
                scanf("%u", &num);
                int ones = countOneBits(num);
                printf("Number of '1' bits: %d\n", ones);
                break;
            }

            case 2: {
                unsigned int num;
                printf("Enter an unsigned integer: ");
                scanf("%u", &num);
                printf("Binary representation: ");
                printBinary(num);
                break;
            }

            case 3: {
                unsigned char byte;
                printf("Enter a byte (0-255): ");
                scanf("%hhu", &byte);
                unsigned char result = ensureEvenParity(byte);
                printf("Original byte: 0x%02X, After parity check: 0x%02X\n", byte, result);
                break;
            }

            case 4: {
                char ch;
                printf("Enter a character: ");
                scanf(" %c", &ch); 
                xorWith32(ch);
                break;
            }

            case 5: {
                int a, b;
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("Before swap: a = %d, b = %d\n", a, b);
                swapUsingXOR(&a, &b);
                printf("After swap:  a = %d, b = %d\n", a, b);
                break;
            }

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please select from 1 to 6.\n");
        }

    } while (choice != 6);

    return 0;
}

