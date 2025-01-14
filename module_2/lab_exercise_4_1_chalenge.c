/*4. Arrays
Challenge: Extend the program to sort the array in ascending order.*/
#include <stdio.h>

// Function to print a one-dimensional array
void print1DArray(int arr[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to swap two elements in a one-dimensional array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort a one-dimensional array in ascending order
void sort1DArray(int arr[], int size) {
	int i, j;
    for ( i = 0; i < size - 1; i++) {
        for ( j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to print a two-dimensional array
void print2DArray(int arr[][3], int rows) {
	int i, j;
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to sort a two-dimensional array (each row) in ascending order
void sort2DArray(int arr[][3], int rows) {
	int i, j, k;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 3 - 1; j++) {
            for (k = 0; k < 3 - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    swap(&arr[i][k], &arr[i][k + 1]);
                }
            }
        }
    }
}

// Function to calculate the sum of elements in a two-dimensional array
int calculateSum(int arr[][3], int rows) {
    int sum = 0;
    int i, j;
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    // One-dimensional array
    int arr1D[5] = {5, 2, 8, 1, 9};
    printf("Original one-dimensional array: ");
    print1DArray(arr1D, 5);
    sort1DArray(arr1D, 5);
    printf("Sorted one-dimensional array: ");
    print1DArray(arr1D, 5);

    // Two-dimensional array
    int arr2D[3][3] = {{5, 2, 8}, {1, 9, 3}, {7, 4, 6}};
    printf("\nOriginal two-dimensional array:\n");
    print2DArray(arr2D, 3);
    sort2DArray(arr2D, 3);
    printf("Sorted two-dimensional array:\n");
    print2DArray(arr2D, 3);

    // Calculate sum of elements in two-dimensional array
    int sum = calculateSum(arr2D, 3);
    printf("Sum of elements in two-dimensional array: %d\n", sum);

    return 0;
}





