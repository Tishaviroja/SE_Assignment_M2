/*Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.*/

#include <stdio.h>


int main() {
  
    FILE *fp;

   
    char str[] = "Hello, World!";

   
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }

    fputs(str, fp);
    fclose(fp);

    
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}

