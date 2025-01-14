/*6. Strings
LAB EXERCISE 1: String Reversal
Challenge: Write the program without using built-in string handling functions.*/


#include<stdio.h>

// Function to get a character array from the user
void getCharArray(char arr[], int size) {
    int i = 0;
    char c;
    while (i < size - 1) {
        c = getchar();  // Read character
        if (c == '\n') {
            break;  // End input on newline
        }
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';  // Null-terminate the string
}

// Function to print a character array
void printCharArray(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        printf("%c", arr[i]);
        i++;
    }
}

// Function to check if two character arrays are equal
int areCharArraysEqual(char arr1[], char arr2[]) {
    int i = 0;
    while (arr1[i] != '\0' && arr2[i] != '\0') {
        if (arr1[i] != arr2[i]) {
            return 0; // Arrays are not equal
        }
        i++;
    }
    if (arr1[i] != '\0' || arr2[i] != '\0') {
        return 0; // Length mismatch
    }
    return 1; // Arrays are equal
}

// Function to get an integer from the user
void getInteger(int* num) {
    char c;
    *num = 0;
    while (1) {
        c = getchar();
        
        // If a digit is encountered, accumulate it into the number
        if (c >= '0' && c <= '9') {
            *num = *num * 10 + (c - '0');
        } 
        // If newline or space, break the loop
        else if (c == '\n' || c == ' ') {
            break;
        } 
        // Handle invalid input
        else {
            printf("Invalid input. Please enter a number.\n");
            *num = 0; // Reset the number
            while (getchar() != '\n'); // Clear the input buffer
            return; // Return and ask for input again
        }
    }
}

int main() {
    int username, acc_number, acc_type;
    char password[6], acc_name[100];
    float balance;

    printf("\n\n\t Enter the Username: ");
    getInteger(&username);  // Using getInteger for username input
    getchar(); // Consume newline character left by getchar()

    printf("Enter your password (5 characters): ");
    getCharArray(password, 6);  // Get password input

    printf("\n\n\t Enter the account number: ");
    getInteger(&acc_number);  // Using getInteger for account number input
    getchar(); // Consume newline character left by getchar()

    printf("\n\n\t Enter the account name: ");
    getCharArray(acc_name, 100);  // Get account name input

    printf("\n\n\t Enter the account type: ");
    getInteger(&acc_type);  // Using getInteger for account type input
    getchar(); // Consume newline character left by getchar()

    printf("\n\n\t Enter the total balance: ");
    scanf("%f", &balance);
    getchar(); // Consume newline character left by scanf

    // Printing the entered details
    printf("\n\n\t Username: %d", username);
    printf("\n\n\t Password: ");
    printCharArray(password);
    printf("\n\n\t Account Number: %d", acc_number);
    printf("\n\n\t Account Name: ");
    printCharArray(acc_name);
    printf("\n\n\t Account Type: %d", acc_type);
    printf("\n\n\t Total Balance: %.2f", balance);

    return 0;
}



