/*Extra Logic Building Challenges
Lab Challenge 3: Number Guessing Game
? Challenge: Provide hints to the user if the guessed number is too high or too low.*/
#include <stdio.h>

#define MAX_ATTEMPTS 6
#define MIN_NUMBER 1
#define MAX_NUMBER 100
main() {
    int randomNumber;
    int userGuess;
    int attempts = 0;

    
    srand(time(NULL));

    
    randomNumber = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between %d and %d.\n", MIN_NUMBER, MAX_NUMBER);
    printf("You have %d attempts to guess the number.\n", MAX_ATTEMPTS);

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        attempts++;

        if (userGuess < randomNumber) {
            if (userGuess < randomNumber - 20) {
                printf("Too low! The number is at least 20 higher than your guess.\n");
            } else {
                printf("Too low! The number is a bit higher than your guess.\n");
            }
        } else if (userGuess > randomNumber) {
            if (userGuess > randomNumber + 20) {
                printf("Too high! The number is at least 20 lower than your guess.\n");
            } else {
                printf("Too high! The number is a bit lower than your guess.\n");
            }
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0;
        }
    }

    printf("Sorry, you didn't guess the number. The number was %d.\n", randomNumber);

    return 0;
}

