#include <stdio.h>

int main() {
    char myName[50], ftheName[50], motherName[50];  // Variables to store names
    int members, age;  // Variables to store members and age

    // Taking user input
    printf("Enter how many members in your family:\n");
    scanf("%d", &members);

    // Consume the leftover newline character after scanf
    getchar();

    printf("Enter your name:\n");
    fgets(myName, sizeof(myName), stdin);

    printf("Enter your age:\n");
    scanf("%d", &age);

    // Consume the leftover newline character after scanf
    getchar();

    printf("Enter your father's name:\n");
    fgets(ftheName, sizeof(ftheName), stdin);

    printf("Enter your mother's name:\n");
    fgets(motherName, sizeof(motherName), stdin);

    // Printing the collected information
    printf("\nYour Name: %s", myName);
    printf("Your Age: %d\n", age);
    printf("Your Father's Name: %s", ftheName);
    printf("Your Mother's Name: %s", motherName);
    printf("%d members in your family!\n", members);

    return 0;
}