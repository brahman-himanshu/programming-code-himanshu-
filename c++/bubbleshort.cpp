#include<iostream>
using namespace std ;
  // wap to implement bubble short algorithm 

  int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  // Predefined array
    int n = 7;                                // Size of the array
    int i, j, temp;

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already sorted
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout<<"print : " ;
    for (i = 0; i < n; i++) {
        cin>>arr[i] ;
    }

    return 0;
}