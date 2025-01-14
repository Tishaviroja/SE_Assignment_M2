/*Extra Logic Building Challenges
Lab Challenge 2: Pascal’s Triangle
? Write a C program that generates Pascal’s Triangle up to N rows using loops.*/

#include <stdio.h>

void generatePascalsTriangle(int n) {
    int triangle[n][n], i, j;

    
    for (i = 0; i < n; i++) {
        triangle[i][0] = 1;
        triangle[i][i] = 1;
    }

    
    for (i = 2; i < n; i++) {
        for (j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    generatePascalsTriangle(n);

    return 0;
}

