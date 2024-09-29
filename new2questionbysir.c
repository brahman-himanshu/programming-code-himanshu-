#include <stdio.h>
int main() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < i; j++) {
            printf("  ");  //in this line  Print 2 spaces for better visibility
        }
        printf("*\n");
    }
    return 0;
}