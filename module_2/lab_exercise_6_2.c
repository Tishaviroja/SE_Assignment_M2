/*6. Strings
LAB EXERCISE 2: Count Vowels and Consonants
? Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.*/

#include <stdio.h>


void countVowelsConsonants(char str[]) {
    int vowels = 0;
    int consonants = 0, i;

    for ( i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
        
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    countVowelsConsonants(str);

}


