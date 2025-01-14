#include<stdio.h>

main()
{
    int arr[3][3]; // Declare a two-dimensional array (3x3 matrix)
    int i, j, sum = 0;

    // Input elements into the matrix
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the elements of the matrix
    printf("Elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
            sum += arr[i][j]; // Calculate the sum of elements
        }
        printf("\n");
    }

    printf("Sum of elements: %d\n", sum);

}

