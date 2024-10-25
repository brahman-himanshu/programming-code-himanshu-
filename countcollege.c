#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n /= 10; // Remove last digit of n
            count++;  // Increment count for each digit
        }
    }
    printf("The number of digits is: %d\n", count);
    return 0;
}