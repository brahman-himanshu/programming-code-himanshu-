#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Predefined array
    int n = 5;                        // Size of the array
    int key = 110;                     // Element to search for
    int found = 0;                    // Flag to indicate if the element is found

    // Linear search algorithm
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}