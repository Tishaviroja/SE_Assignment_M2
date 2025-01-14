/*5. Functions
LAB EXERCISE 2: Factorial Calculation
Challenge: Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers.*/


#include <stdio.h>
#include <time.h>

 
long long factorial_recursive(int n) {
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

long long factorial_iterative(int n) {
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1;
    }

    long long result = 1;
    int i = 2;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    clock_t start_recursive = clock();
    long long result_recursive = factorial_recursive(num);
    clock_t end_recursive = clock();
    if (result_recursive != -1) {
        printf("Factorial of %d (recursive) = %lld\n", num, result_recursive);
        printf("Time taken (recursive): %.6f seconds\n", (double)(end_recursive - start_recursive) / CLOCKS_PER_SEC);
    }

    clock_t start_iterative = clock();
    long long result_iterative = factorial_iterative(num);
    clock_t end_iterative = clock();
    if (result_iterative != -1) {
        printf("Factorial of %d (iterative) = %lld\n", num, result_iterative);
        printf("Time taken (iterative): %.6f seconds\n", (double)(end_iterative - start_iterative) / CLOCKS_PER_SEC);
    
	}
}
