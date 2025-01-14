/*LAB EXERCISE 3: Sum of Digits
Challenge: Extend the program to reverse the digits of the number.*/

#include <stdio.h>
main() {
    int num, sum = 0, reversed = 0;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    
    while (num != 0) {
        sum += num % 10;
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    
    printf("Original number: %d\n", original);
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reversed);

    
}


