#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    // Step 1: Reverse first d elements
    reverse(arr, arr + d);

    // Step 2: Reverse remaining elements
    reverse(arr + d, arr + n);

    // Step 3: Reverse the whole array
    reverse(arr, arr + n);

    // Print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}