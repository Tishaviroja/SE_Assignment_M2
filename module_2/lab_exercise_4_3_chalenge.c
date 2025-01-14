/*4. Arrays
LAB EXERCISE 3: Sum of Array Elements
Challenge: Modify the program to also find the average of the numbers.*/

#include<stdio.h>

main()
{
	
    int n, i;
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (i = 0; i < n; i++) 
	{
        sum += arr[i];
    }

    float average = (float)sum / n;

    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    
}
