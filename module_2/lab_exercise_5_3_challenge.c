/*5. Functions
LAB EXERCISE 3: Palindrome Check
Challenge: Modify the program to check if a given string is a palindrome*/


#include <stdio.h>

#define MAX_LENGTH 100

int isPalindrome(char* str) 
{
    int length = strlen(str);
    int i;

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }

    return 1;
}

int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    
    str[strlen(str) - 1] = '\0';

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

