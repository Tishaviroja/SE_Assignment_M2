/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/

#include <stdio.h>

int main() {
    
    int var = 10;
    int *ptr;

    
    ptr = &var;

   
    printf("the Initial value of var: %d\n", var);
    printf("the value of ptr: %p\n", (void *)ptr);
    printf("Value at address ptr: %d\n", *ptr);

    
    *ptr = 20;

    
    printf("Updated value of var: %d\n", var);
    printf("Updated value of ptr: %p\n", (void *)ptr);
    printf("Value at address ptr: %d\n", *ptr);

    
}

