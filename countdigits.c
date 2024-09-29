#include <stdio.h>

// Function to count the number of digits in a number
int countDigits(int number) {
    int count = 0;
    if (number == 0) {
        return 1;
    }
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    
    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Counting the digits
    int digitCount = countDigits(num);
    
    // Printing the result
    printf("The number %d has %d digits.\n", num, digitCount);
    
    return 0;
}