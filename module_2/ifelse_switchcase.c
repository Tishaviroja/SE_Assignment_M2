/*Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).*/

#include<stdio.h>

main()
{
	int num,month;
	printf("enter a number:");
	scanf(" %d",&num);
	
	if(num % 2==0){
		
		printf("%d is an even number\n\n",num);
	}else{
	
		printf("%d is an odd number\n\n",num);
	}
	
	printf("enter the month number (1-12):");
	scanf(" %d",&month);
	
	switch(month){
	
		case 1: 
				printf("january\n");
				break;
		case 2: 
				printf("february");
				break;
	 	case 3: 
				printf("march");
				break;
		case 4: 
				printf("april");
				break;
		case 5: 
				printf("may");
				break;
		case 6: 
				printf("jun");
				break;
		case 7: 
				printf("july");
				break;
		case 8: 
				printf("august");
				break;
		case 9: 
				printf("september");
				break;
		case 10: 
				printf("october");
				break;
		case 11: 
				printf("november");
				break;
		case 12: 
				printf("december");
				break;
		default:
            	printf("Invalid month number.\n");
            	break;

	
	}
}

