/*LAB EXERCISE 2: Multiplication Table
? Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.*/

#include<stdio.h>

main()
{
	int num, i;
	
	printf("\n\n\t enter a number :");
	scanf("%d",&num);
	
	for(i=1; i<=10; i++)
	{
		printf("\n\n\t %d * %d = %d ",num, i, num * i);
	}
}
