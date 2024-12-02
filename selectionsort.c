#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};  // Predefined array
    int n = 5;                        // Size of the array
    int i, j, minIndex, temp;

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the current element is the smallest

        // Find the smallest element in the unsorted part of the array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }

        // Swap the smallest element with the first element of the unsorted part
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}