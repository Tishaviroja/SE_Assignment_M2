/*5. Functions
LAB EXERCISE 3: Palindrome Check
? Write a C program that takes a number as input and checks whether it is a palindrome using
a function.*/

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

}

