/*Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).*/

#include<stdio.h>
main()
{
	int i;
	
	printf("\nusing while loop:\n");
    while(i<=10){
    		printf(" %d\n",i);
    		i++;
		}
    
    printf("\nusing for loop:\n");
    for(i=1; i<=10; i++)
    {
	 	printf(" %d\n",i);
    	
	}
	
	do{
		printf("\nUsing do-while loop:\n");
		printf("%d\n",i);
		i++;
	}while(i<=10);
	
}


