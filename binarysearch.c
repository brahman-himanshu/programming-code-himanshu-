#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Predefined sorted array
    int n = 5;                        // Size of the array
    int key = 30;                     // Element to search for
    int low = 0, high = n - 1;        // Index range for binary search
    int mid;
    int found = 0;                    // Flag to indicate if the element is found

    // Binary search algorithm
    while (low <= high) {
        mid = (low + high) / 2;       // Calculate the middle index

        if (arr[mid] == key) {        // Element found
            printf("Element %d found at index %d\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {  // Search in the right half
            low = mid + 1;
        } else {                      // Search in the left half
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}      