//LAB EXERCISE 1: Prime Number Check
//? Challenge: Extend the program to handle invalid operator inputs.

#include <stdio.h>

main() {
    float num1, num2;
    char operator;

    printf("\n\n\t Enter first number: ");
    scanf("%f", &num1);

    printf("\n\n\t Enter second number: ");
    scanf("%f", &num2);

    printf("\n\n\t Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    int validOperator = 0;
    float result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            validOperator = 1;
            break;
        case '-':
            result = num1 - num2;
            validOperator = 1;
            break;
        case '*':
            result = num1 * num2;
            validOperator = 1;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                validOperator = 1;
            } else {
                printf("\n\n\t Error! Division by zero.");
            }
            break;
        case '%':
            if ((int) num2 != 0) {
                result = (int) num1 % (int) num2;
                validOperator = 1;
            } else {
                printf("\n\n\t Error! Modulus by zero.");
            }
            break;
        default:
            printf("\n\n\t Invalid operator. Please enter one of the following: +, -, *, /, %%");
            break;
    }

    if (validOperator) {
        printf("\n\n\t %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    }

}


