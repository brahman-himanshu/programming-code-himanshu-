#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    int i = 0;
    int areIdentical = 1;  // Flag to check if strings are identical

    // Compare each character of the two strings
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            areIdentical = 0;  // Strings are not identical
            break;
        }
        i++;
    }

    // If both strings ended at the same time and all characters match, they are identical
    if (areIdentical && str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are not identical.\n");
    }

    return 0;
}