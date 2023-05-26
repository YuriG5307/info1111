#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, userGuess;
    
    // Initialize the random number generator with the current time
    srand(time(NULL));

    // Generate random numbers from 1 to 100
    secretNumber = rand() % 100 + 1;

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess); // Read the player's guesses

        if (userGuess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (userGuess < secretNumber) {
            printf("Too low! Try again.\n");
        }
    } while (userGuess != secretNumber);

    printf("Congratulations! You've guessed the number.\n");

    return 0;
}
