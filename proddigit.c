// question product of that accept an integers value and return the sum of cubes of individuals digits of
#include <stdio.h>

// Function to calculate the product of first n natural numbers
int prodofnaturalnumbers(int n) {
    int prod= 1;
    for (int i = 1; i <= n; i++) {
        prod = prod*i;
    }
    return prod;
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n > 0||n<0) {
        int result = prodofnaturalnumbers(n);
        printf("The prod of the first %d natural numbers is: %d\n", n, result);
    } //else {
       // printf("Please enter a natural number only (no number allow here 0 or negative ):\n");
   // }

    return 0;
}