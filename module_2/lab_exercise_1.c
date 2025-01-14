//EXTRA LAB EXERCISES FOR IMPROVING PROGRAMMING LOGIC

/*LAB EXERCISE 1: Simple Calculator
? Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.*/

#include <stdio.h>

main() 
{
    float num1, num2;
    char operator;

    printf("\n\n\t Enter first number: ");
    scanf("%f", &num1);

    printf("\n\n\t Enter second number: ");
    scanf("%f", &num2);

    printf("\n\n\t Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("\n\n\t %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\n\n\t %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\n\n\t %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("\n\n\t %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("\n\n\t Error! Division by zero.");
            }
            break;
        case '%':
            if ((int) num2 != 0) {
                printf("\n\n\t %.2f %% %.2f = %.2f\n", num1, num2, (int) num1 % (int) num2);
            } else {
                printf("\n\n\t Error! Modulus by zero.");
            }
            break;
        default:
            printf("\n\n\t Invalid operator");
            break;
    }
}

	
	
	
	

