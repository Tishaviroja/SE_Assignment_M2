/*LAB EXERCISE 3: Sum of Digits
? Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.*/

#include <stdio.h>

main() {
    int num, sum = 0;


    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);

}


