#include <stdio.h>


int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    
if (c >= 65 && c <= 90)  {
     printf("ALPHABET: '%c' is a letter.\n", c);
}
	else  if (c >= 65 && c <= 90) {
       printf("UPPERCASE: '%c' is an uppercase letter.\n", c);
       		 }
     else if (c>=97 && c<=122) {
            printf("LOWERCASE: '%c' is a lowercase letter.\n", c);
        }
    
    else if (c >= 48 && c <= 57) {
        printf("DIGIT: '%c' is a digit.\n", c);
    }
    
    else if (c == 32 || c == 9 || c == 13 || c == 10) {
        printf("SPACE: '%c' is a whitespace character.\n", c);
    }
   
    else {
        printf("OTHER: '%c' is not listed.\n", c);
    }

    return 0;
}

