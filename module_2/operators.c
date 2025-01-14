/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.*/

#include<stdio.h>
main()
{
	int num1,num2;
	
	printf("enter first integer :");
	scanf("%d",&num1);
	
	printf("enter second integer :");
	scanf("%d",&num2);
	
	//arithmetic operators
	
	int sum = num1 + num2;
	printf("Sum: %d\n", sum);
	
	int decrement = num1 - num2;
	printf("decrement: %d\n",decrement);
	
	int multiply = num1*num2;
	printf("multiply: %d\n",multiply);
	
	int devision = num1/num2;
	printf("devision: %d\n",devision);
	
	int modual = num1 % num2;
	printf("mudual: %d\n",modual);
	
	//relational operators
	
	int equal = num1 == num2;
	printf("equal: %d\n",equal);
	
	int greater = num1 > num2;
	printf("greater: %d\n",greater);
	
	int lessthan = num1 < num2;
	printf("lesstnan: %d\n",lessthan);
	
	int notequal = num1 != num2;
	printf("notequal: %d\n",notequal);
	
	/*int greater or Equal = num1 >= num2;
	printf("greater or Equal: %d\n",greater or Equal);*/
	
	
	int lessequal = num1 <= num2;
	printf("lessequal: %d\n",lessequal );
	
	
	//logical operator
	
	int AND = num1 && num2;
	printf("AND: %d\n",AND);
	
	int OR = num1 || num2;
	printf("OR: %d\n",OR);
	
	/*int NOT =num1 ! num2;
	printf("NOT: %d\n",NOT);*/
		
}
