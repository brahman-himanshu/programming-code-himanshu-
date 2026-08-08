#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 3, 4};
    int n = 6;

    int j = -1;

    // Find first zero
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    // Move non-zero elements
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // Print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}