//assessment for food billing system//

#include<stdio.h>

main()

	
{
	int choice, quantity;
	float totalbill=0;
	
	printf("-----------menu--------------");
	printf("\n\n\t 1. pizza = rs. 180");
	printf("\n\n\t 2. burger = rs. 100");
	printf("\n\n\t 3. dosa = rs. 120");
	printf("\n\n\t 4. idli = rs. 50");
	

	
	do{ 
		
		printf("\n\n\t enter your choice :");
		scanf(" %d",&choice);
	

		printf("\n\n\t enter your quantity :");
		scanf(" %d",&quantity);
	
	switch (choice){
		
		case 1:
			totalbill += 180 * quantity;
			break;
		case 2:
			totalbill += 100 * quantity;
			break;
		case 3: 
			totalbill += 120 * quantity;
			break;
		case 4: 
			totalbill += 50 * quantity;
			break;
		default:
			printf("\n invalid choice");
			break;
	}
	
		
	
			printf("\n\n\t do you want to order more? (1 for yes, 0 for no) :");
			scanf(" %d",&choice);
		
			if(choice == 0)
			{
				printf("\n\n\t your totalbill is: rs. %2.f",totalbill);
				break;
			}
		
	}while(1);
	
}
