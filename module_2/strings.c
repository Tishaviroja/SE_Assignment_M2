/*Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().*/

#include<stdio.h>

main()
{
	char str1[20], str2[20];
	
	printf("\n\n\t enter any string :");
	scanf("%s",&str1);
	
	printf("\n\n\t enter any string :");
	scanf("%s",&str2);
	
	printf("\n\n\t Length of String : %d", strlen(str1));
	
	printf("\n\n\t After joining the strings : %s", strcat(str1, str2));
	
	
}
