// question sum of cube of that accept an integers value and return the sum of cubes of individuals digits of
#include <stdio.h>
#include<math.h>

// Function to calculate the sum cubeof first n natural numbers
int sumcubeofnaturalnumbers(int n) {
    int sumcube = 0;
    for (int i = 1; i <= n; i++) {
        sumcube+= i*i*i;
    }
    return sumcube;
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n >=0||n<=0) {
        int result = sumcubeofnaturalnumbers(n);
        printf("The sumcube of the first %d natural numbers is: %d\n", n, result);
    } 
    return 0;
}  