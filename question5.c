#include <stdio.h>
int findSmallest(int arr[], int size) {
 int smallest = arr[0];
 for (int i = 1; i < size; i++) {
 if (arr[i] < smallest) {
 smallest = arr[i];
 }
 }
 return smallest;
}
int main() {
 int arr[] = {3, 5, 7, 2, 8};
 int size = sizeof(arr) /
sizeof(arr[0]);
 printf("Smallest element in the arrayis: %d\n", findSmallest(arr, size));
 return 0;
}