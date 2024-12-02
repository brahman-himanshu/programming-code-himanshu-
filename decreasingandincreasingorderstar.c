#include <stdio.h>

int main() {
    int n = 5;  // Number of rows for the decreasing and increasing parts

    // Decreasing pattern
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Increasing pattern
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}