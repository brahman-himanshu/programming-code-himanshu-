#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortArray(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    sortArray(arr, n);
    int kth_smallest = arr[k-1]; 
    int kth_largest = arr[n-k];   
    printf("The %dth smallest element is: %d\n", k, kth_smallest);
    printf("The %dth largest element is: %d\n", k, kth_largest);
    return 0;
}