#include <stdio.h>
int main() {
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < i; j++) {
            printf("  ");  //in this line  Print 3 spaces for better visibility
        }
        printf("*\n");
    }
    return 0;
}