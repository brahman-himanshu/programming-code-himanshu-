#include <stdio.h>
int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    int j = 0;
    // Store negative numbers first
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[j++] = arr[i];
        }
    }
    // Store positive numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[j++] = arr[i];
        }
    }
    // Copy the elements back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    // Print the rearranged array
    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}