/*5. Functions
LAB EXERCISE 1: Fibonacci Sequence
Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.*/

#include <stdio.h>
#include <time.h>

int fibonacci_recursive(int n) 
{
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int fibonacci_iterative(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int fib_prev = 0;
    int fib_curr = 1;
    int fib_next;
    int i = 2;

    while (i <= n) {
        fib_next = fib_prev + fib_curr;
        fib_prev = fib_curr;
        fib_curr = fib_next;
        i++;
    }

    return fib_curr;
}

main() 
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    clock_t start_recursive = clock();
    int fib_recursive = fibonacci_recursive(n);
    clock_t end_recursive = clock();

    clock_t start_iterative = clock();
    int fib_iterative = fibonacci_iterative(n);
    clock_t end_iterative = clock();

    printf("Nth Fibonacci number (recursive): %d\n", fib_recursive);
    printf("Time taken (recursive): %.6f seconds\n", (double)(end_recursive - start_recursive) / CLOCKS_PER_SEC);

    printf("Nth Fibonacci number (iterative): %d\n", fib_iterative);
    printf("Time taken (iterative): %.6f seconds\n", (double)(end_iterative - start_iterative) / CLOCKS_PER_SEC);
}

