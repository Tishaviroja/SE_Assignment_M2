/*Extra Logic Building Challenges
Lab Challenge 1: Armstrong Number
Challenge: Write a program to find all Armstrong numbers between 1 and 1000.*/

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
    printf("Armstrong numbers between 1 and 1000:\n");
	int i;
    for (i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}




