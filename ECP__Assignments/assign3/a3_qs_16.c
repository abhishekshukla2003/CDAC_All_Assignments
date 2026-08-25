#include <stdio.h>
#include <stdlib.h>   
#include <time.h>     

int main() {
    int magicNumber, guess, attempts = 0;
    
  
    srand(time(0));
    
    
    magicNumber = rand() % 1000 + 1;
    
    printf("Welcome to Guess the Magic Number Game!\n");
    printf("I have chosen a number between 1 and 1000.\n");
    printf("You have maximum 10 chances to guess it.\n\n");

    
    while (attempts < 10) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == magicNumber) {
            printf("Congrats! You won in %d attempts.\n", attempts);
            return 0; 
        } 
        else if (guess < magicNumber) {
            printf("** left ** (Try a bigger number)\n");
        } 
        else {
            printf("** right ** (Try a smaller number)\n");
        }
    }

    printf("\nSorry, you used all 10 chances. The magic number was %d.\n", magicNumber);

    return 0;
}

