/*6. Strings
LAB EXERCISE 2: Count Vowels and Consonants
Challenge: Extend the program to also count digits and special characters.*/

#include<stdio.h>

// Function to count vowels, consonants, digits, and special characters
void countCharacters(char str[]) {
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int specialChars = 0, i;

    for ( i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        // Check if character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
        // Check if character is a consonant (alphabet letter but not vowel)
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            consonants++;
        }
        // Check if character is a digit
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        // Check if character is a special character (not alphabet, digit, or whitespace)
        else if (c != ' ' && c != '\t' && c != '\n') {
            specialChars++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    countCharacters(str);

}


