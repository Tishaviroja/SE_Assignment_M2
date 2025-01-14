/*Extra Logic Building Challenges
Lab Challenge 2: Pascal’s Triangle
Challenge: Implement the same program using a recursive function.*/

#include <stdio.h>

int factorial(int n);

main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factorial of %d = %ld\n", num, factorial(num));

    return 0;
}


int factorial(int n) {
   
    if (n == 0)
	{
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

