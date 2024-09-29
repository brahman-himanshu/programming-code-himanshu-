#include<stdio.h>
int main (){
	int x,  square;
	// Function to check if a number is a perfect square
int isPerfectSquare(int x); {
    //s = (int)square(x); // Calculate the square root of x and truncate to an integer
    return (s * s == x); // Return true if x is a perfect square (if s*s is equal to x)
}

// Function to check if a number is a Fibonacci number
int isFibonacci(int x); {
    // Check if the given number is a perfect square of (5 * x^2 + 4) or (5 * x^2 - 4)
    return isPerfectSquare(5 * x * x + 4) || isPerfectSquare(5 * x * x - 4);
}

// Main function
int main(void); {
    // Declare and initialize the number 'n' to check if it's a Fibonacci number
    int n = 8; // The number to be checked

    // Check if 'n' is greater than 0 before proceeding
    if (n > 0) {
        // Print whether 'n' is a Fibonacci number or not by calling the 'isFibonacci' function
        printf("Is %d a Fibonacci number? %d", n, isFibonacci(n));
    }
	return 0 ;
}