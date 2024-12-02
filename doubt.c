#include <stdio.h>

int main() {
    int n = 10;  // Starting number
    //int rows = 4;  // Number of rows

    //int current = n;  // Initialize current number to print

    for (int i = n; i >=1; i--) {  // Loop through rows
        for (int j = 1; j <= i; j++) {  // Print numbers in the current row
            printf("%d ",j);
            //n--;  // Decrement the number
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}