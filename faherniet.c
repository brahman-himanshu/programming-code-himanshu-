#include <stdio.h>

int main() {
    float centigrade, fahrenheit;

    // Ask the user to enter the temperature in Centigrade
    printf("Enter the temperature in Centigrade: ");
    scanf("%f", &centigrade);

    // Convert Centigrade to Fahrenheit using the formula
    fahrenheit = (centigrade * 9 / 5) + 32;

    // Display the result
    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);

    return 0;
}