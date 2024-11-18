#include <stdio.h>
int main() {
    int num, digit, sum;
    printf("Armstrong numbers between 1 and 100 are:\n");
    for (num = 1; num <= 100; num++) {
        int temp = num;  // Temporary variable to store the number
        sum = 0;         // Reset sum for each number
        while (temp > 0) {
            digit = temp % 10;  // Extract the last digit
            sum += digit * digit * digit;  // Cube the digit and add to sum
            temp /= 10;  // Remove the last digit
        }
        if (sum == num) {
            printf("%d ", num);  // Print Armstrong number
        }
    }
    return 0;
}