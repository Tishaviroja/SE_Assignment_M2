/*4.arrays
LAB EXERCISE 3: Sum of Array Elements
? Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.*/

#include<stdio.h>

main()
{
	int n, i;
	int arr[n];
	
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	printf(" Enter %d numbers :",n);
	
	for(i=0; i<n; i++)
	{
		printf("enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	
	int sum=0;
	for (i=0; i<n; i++)
	{
		sum+=arr[i];
	}
	
	printf("sum of array elements :%d\n",sum);
	
}
