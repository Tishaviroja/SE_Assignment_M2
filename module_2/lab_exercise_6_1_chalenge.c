#include <stdio.h>

// Function to get a character array from the user
void getCharArray(char arr[], int size) {
    int i = 0;
    char c;
    while (i < size - 1) {
        c = getchar();
        if (c == '\n') {
            break;
        }
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
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
            return 0;
        }
        i++;
    }
    if (arr1[i] != '\0' || arr2[i] != '\0') {
        return 0;
    }
    return 1;
}

// Function to get an integer from the user
void getInteger(int* num) {
    char c;
    int i = 0;
    while (1) {
        c = getchar();
        if (c >= '0' && c <= '9') {
            *num = *num * 10 + (c - '0');
        } else if (c == '\n') {
            break;
        } else {
            printf("Invalid input. Please enter a number.\n");
            i = 0;
            *num = 0;
        }
    }
}

int main() {
    int username, acc_number, acc_type;
    char password[6], acc_name[100];
    float balance;

    printf("\n\n\t Enter the Username: ");
    scanf("%d", &username);
    getchar(); // Consume the newline character

    printf("Enter your password (5 characters): ");
    getCharArray(password, 6);

    printf("\n\n\t Enter the account number: ");
    scanf("%d", &acc_number);
    getchar(); // Consume the newline character

    printf("\n\n\t Enter the account name: ");
    getCharArray(acc_name, 100);

    printf("\n\n\t Enter the account type: ");
    scanf("%d", &acc_type);
    getchar(); // Consume the newline character

    printf("\n\n\t Enter the total balance: ");
    scanf("%f", &balance);
    getchar(); // Consume the newline character

    printf("\n\n\t Username: %d", username);
    printf("\n\n\t Password: ");
    printCharArray(password);
    printf("\n\n\t Account Number: %d", acc_number);
    printf("\n\n\t Account Name: ");
    printCharArray(acc_name);
    printf("\n\n\t Account Type: %d", acc_type);
    printf("\n\n\t Total Balance: %f", balance);
}

