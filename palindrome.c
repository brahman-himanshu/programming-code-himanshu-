#include <stdio.h>

int main() {
    int num = 121;      // Predefined number to check (you can change this number)
    int originalNum = num; // Store the original number
    int reversedNum = 0;
    int remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;         // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10;                    // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}