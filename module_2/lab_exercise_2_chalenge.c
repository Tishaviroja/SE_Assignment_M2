//LAB EXERCISE 2: Multiplication Table
/*? Challenge: Allow the user to input the range of the multiplication table 
(e.g., from 1 to N)*/

#include<stdio.h>

main()
{
	int num, start, end, i;
	
	printf("\n\n\t enter a number :");
	scanf("%d",&num);
	
	printf("\n\n\t enter the start of the range :");
	scanf("%d",&start);
	
	printf("\n\n\t enter the end of the range :");
	scanf("%d",&end);
	
	if(start>end)
	{
		printf("\n\n\t start of range cannot be greater than end of range :");
	}
	
	printf("\n\n\t multiplication table %d from %d to %d\n :",num, start, end);
	
	
	
	for(i=start; i<=end; i++)
	{
		printf("\n\n\t %d * %d = %d",num, i, num * i);
	}
}
