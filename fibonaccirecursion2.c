#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base case: First two Fibonacci numbers
    if (n == 0) {
        return 0;  // F(0) = 0
    } else if (n == 1) {
        return 1;  // F(1) = 1
    } else {
        // Recursive case: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Main function
int main() {
    int n = 6;    // Number of terms in the Fibonacci series (change as needed)
    int sum = 0;

    // Calculate sum of Fibonacci series using recursion
    for (int i = 0; i < n; i++) {
        sum += fibonacci(i);  // Add Fibonacci number to the sum
    }

    // Print the sum of the first n Fibonacci numbers
    printf("Sum of the first %d Fibonacci numbers is: %d\n", n, sum);

    return 0;
}