/*
Extra Logic Building Challenges
Lab Challenge 3: Number Guessing Game
? Write a C program that implements a simple number guessing game. The program should
generate a random number between 1 and 100, and the user should guess the number
within a limited number of attempts.*/

#include <stdio.h>


int main() {
    // Initialize random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;

    // Initialize number of attempts
    int attempts = 0;
    int maxAttempts = 6;

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("You have %d attempts to guess the number.\n", maxAttempts);

    while (attempts < maxAttempts) {
        int guess;

        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else if (guess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0;
        }

        printf("You have %d attempts remaining.\n", maxAttempts - attempts);
    }

    printf("Sorry, you didn't guess the number. The number was %d.\n", numberToGuess);
}
