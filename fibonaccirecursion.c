#include <stdio.h>

int main() {
    int n = 6;  // Predefined number of terms in the Fibonacci series
    int i = 0, sum = 0;
    int first = 0, second = 1, next;

    // Recursively calculate the sum of Fibonacci series up to n terms
    while (i < n) {
        // Recursive calculation of Fibonacci numbers
        next = first + second;  // Calculate next Fibonacci number
        first = second;         // Update first to second
        second = next;          // Update second to next
        
        sum += first;           // Add the Fibonacci number to the sum
        i++;
    }

    // Print the sum of Fibonacci numbers
    printf("Sum of the first %d Fibonacci numbers is: %d\n", n, sum);

    return 0;
}