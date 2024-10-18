#include <stdio.h>

// Define a structure to store the full address
struct Address {
    char city[50];
    char town[50];
    char state[50];
    char country[50];
    char gali_no[20];
    char district[50];
};

int main() {
    // Declare a variable of type Address
    struct Address addr;

    // Input the address details from the user
    printf("Enter City: ");
    scanf("%49s", addr.city); // Use %49s to prevent buffer overflow

    printf("Enter Town: ");
    scanf("%49s", addr.town);

    printf("Enter State: ");
    scanf("%49s", addr.state);

    printf("Enter Country: ");
    scanf("%49s", addr.country);

    printf("Enter Gali No: ");
    scanf("%19s", addr.gali_no); // Use %19s to prevent buffer overflow

    printf("Enter District: ");
    scanf("%49s", addr.district);

    // Print the address details
    printf("\nFull Address:\n");
    printf("City: %s\n", addr.city);
    printf("Town: %s\n", addr.town);
    printf("State: %s\n", addr.state);
    printf("Country: %s\n", addr.country);
    printf("Gali No: %s\n", addr.gali_no);
    printf("District: %s\n", addr.district);

    return 0;
}