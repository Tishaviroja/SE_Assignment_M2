/*5. Functions
LAB EXERCISE 1: Fibonacci Sequence
? Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.*/

#include<stdio.h>

int fibonacci(int n) 
{
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

main() 
{
    int n, i;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

}

