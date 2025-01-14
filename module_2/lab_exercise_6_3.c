/*6. Strings
LAB EXERCISE 3: Word Count
? Write a C program that counts the number of words in a sentence entered by the user.*/

#include <stdio.h>

int countWords(char sentence[]) {
    int wordCount = 0;
    int inWord = 0, i;

    for ( i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            inWord = 0;
        } else if (!inWord) {
            wordCount++;
            inWord = 1;
        }
    }

    return wordCount;
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character

    int wordCount = countWords(sentence);

    printf("Number of words: %d\n", wordCount);

    return 0;
}


