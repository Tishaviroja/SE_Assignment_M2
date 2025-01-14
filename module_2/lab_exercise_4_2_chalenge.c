/*4. Arrays
LAB EXERCISE 2: Matrix Addition
Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/

#include <stdio.h>

void add_matrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    int i = 0, j = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            j++;
        }
        i++;
    }
}

void multiply_matrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    int i = 0, j = 0, k = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            result[i][j] = 0;
            k = 0;
            while (k < 3) {
                result[i][j] += mat1[i][k] * mat2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }
}

void print_matrix(int mat[3][3]) {
    int i = 0, j = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            printf("%d ", mat[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
 int main() 
{
    int mat1[3][3], mat2[3][3], result_add[3][3], result_multiply[3][3];
    int i = 0, j = 0;

    printf("Enter elements of matrix 1:\n");
    while (i < 3) {
        j = 0;
        while (j < 3) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
            j++;
        }
        i++;
    }
    i = 0;

    printf("Enter elements of matrix 2:\n");
    while (i < 3) {
        j = 0;
        while (j < 3) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
            j++;
        }
        i++;
    }

    add_matrices(mat1, mat2, result_add);

    multiply_matrices(mat1, mat2, result_multiply);

    printf("Matrix 1:\n");
    print_matrix(mat1);
    printf("Matrix 2:\n");
    print_matrix(mat2);
    printf("Resultant Matrix (Addition):\n");
    print_matrix(result_add);
    printf("Resultant Matrix (Multiplication):\n");
    print_matrix(result_multiply);

}
