/*Extra Logic Building Challenges
Lab Challenge 1: Armstrong Number
? Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3).*/

#include <stdio.h>

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digitCount = (int) log10(num) + 1;

    while (num != 0) {
        int digit = num % 10;
        sum += (int) pow(digit, digitCount);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


