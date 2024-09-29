#include <stdio.h>
int main() {
    int i, j;

    // Top part of the heart
    for (i = 0; i < 6; i++) {
        for (j = 0; j <= 6; j++) {
            if ((i == 0 && (j == 1 || j == 5)) ||(i == 1 && (j == 0 || j == 6)) ||(i == 2 && j == 6)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        for (j = 0; j <= 6; j++) {
            if ((i == 0 && (j == 1 || j == 5)) ||(i == 1 && (j == 0 || j == 6)) ||(i == 2 && j == 0)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    // Bottom part of the heart with 'A' in the middle
    for (i = 0; i < 6; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for (j = 0; j < 13 - 2 * i; j++) {
            if (i == 2 && j == 5) {
                printf("A");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}