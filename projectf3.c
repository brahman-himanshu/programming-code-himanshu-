// question sum of cube of that accept an integers value and return the sum of cubes of individuals digits of
#include <stdio.h>

// Function to calculate the sum of first n natural numbers
int sumofnaturalnumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n > 0) {
        int result = sumofnaturalnumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, result);
    } else {
        printf("Please enter a natural number only (no number allow here 0 or negative ):\n");
    }

    return 0;
} 	