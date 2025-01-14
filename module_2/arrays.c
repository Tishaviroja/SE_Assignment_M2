/*EXERCISE:
o Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements*/
#include <stdio.h>

int main() {
    // Part 1: One-dimensional array (storing and printing 5 integers)
    int arr[5];  // Declare a one-dimensional array of size 5

    // Input 5 integers for the one-dimensional array
    
    printf("Enter 5 integers for the one-dimensional array:\n");
    int i, j;
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the 5 integers
    printf("The 5 integers you entered are:\n");
    for ( i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Part 2: Two-dimensional array (3x3 matrix) and calculating the sum
    int matrix[3][3];  // Declare a 3x3 matrix
    int sum = 0;       // Variable to store the sum of all elements

    // Input elements into the 3x3 matrix
    printf("Enter 9 integers for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the 3x3 matrix
    printf("The 3x3 matrix you entered is:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of all elements in the matrix
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    // Print the sum of all elements
    printf("The sum of all elements in the 3x3 matrix is: %d\n", sum);

}

