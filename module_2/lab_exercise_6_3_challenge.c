/*6. Strings
LAB EXERCISE 3: Word Count
Challenge: Modify the program to find the longest word in the sentence.*/

#include <stdio.h>

void analyzeSentence(char sentence[]) {
    int wordCount = 0;
    int longestWordLength = 0;
    char longestWord[100];

    int inWord = 0;
    int wordLength = 0, i;

    for ( i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            if (wordLength > longestWordLength) {
                longestWordLength = wordLength;
                strncpy(longestWord, sentence + i - wordLength, wordLength);
                longestWord[wordLength] = '\0';
            }

            wordLength = 0;
            inWord = 0;
            wordCount++;
        } else if (!inWord) {
            inWord = 1;
        }

        if (inWord) {
            wordLength++;
        }
    }

  
    if (wordLength > longestWordLength) {
        longestWordLength = wordLength;
        strncpy(longestWord, sentence + strlen(sentence) - wordLength, wordLength);
        longestWord[wordLength] = '\0';
    }

    wordCount++; 

    printf("Number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);
    printf("Length of longest word: %d\n", longestWordLength);
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character

    analyzeSentence(sentence);

    return 0;
}

