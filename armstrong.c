#include <stdio.h>
#include <math.h>

int main() {
    int num = 153;    // Predefined number to check (you can change this number)
    int originalNum = num; // Store the original number
    int sum = 0;
    int digit, digitsCount;

    // Find the number of digits in the number
    digitsCount = (int)log10(num) + 1;

    // Armstrong check
    while (num > 0) {
        digit = num % 10;   // Extract the last digit
        sum += pow(digit, digitsCount); // Add the digit raised to the power of the number of digits
        num /= 10;  // Remove the last digit
    }

    // Check if the sum equals the original number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}