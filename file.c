#include <stdio.h>

int main() {
    FILE *fptr;

    // Writing to a file
    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "Hello, File Operations in C!\n");
    fclose(fptr);

    // Reading from a file
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char str[100];
    while (fgets(str, 100, fptr) != NULL) {
        printf("%s", str);
    }
    fclose(fptr);

    return 0;
}