/*Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them*/

#include <stdio.h>

struct student
{
	char name[50];
	int roll_number;
	float marks;
};

main()
{
	struct student students[3];
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("\n\n\t enter details of students :%d",i+1);
		printf("\n\n\t name :");
		
		/*fgets(students[i].name, sizeof(students[i].name)stdin);
		students[i].name[strcspn(students[i].name, "\n")] = 0;*/
		
		fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

		printf("Roll number: ");
        scanf("%d", &students[i].roll_number);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar();

	}
	
	printf("\n\n\t details of students :\n");
	
	for(i=0; i<3; i++)
	{
		printf("\n\n\t student %d:",i+1);
		printf("\n\n\t name: %s", students[i].name);
		printf("\n\n\t roll_number : %d\n",students[i].roll_number);
		printf("\n\n\t marks:%2.f\n\n",students[i].marks);
			}
}
