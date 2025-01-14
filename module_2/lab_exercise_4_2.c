/*4. Arrays
LAB EXERCISE 2: Matrix Addition
? Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.*/

#include<stdio.h>
main()
{
	int matrix1[2][2], matrix2[2][2], result[2][2];
	int i, j;
	
	printf("\n\n\t Enter element of matrix 1:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter element [%d][%d]:",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("\n\n\t Enter element of matrix 2:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter element [%d][%d]:",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	for(i=0; i<2; i++)
	{
		
		for(j=0; j<2; j++)
		{
			result[i][j]=matrix1[i][j] + matrix2[i][j];
		}
	}
	
	printf("matrix1 :\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d",matrix1[i][j]);
			
		}
	}printf("\n");
	
	printf("matrix2:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d",matrix2[i][j]);
			
		}
	}printf("\n");
	
	printf("result of matrix:\n");
	
		for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d",result[i][j]);
			
		}
	}printf("\n");
}
