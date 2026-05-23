#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    // Input target element
    cout << "Enter target element: ";
    cin >> target;

    bool found = false;

    // Searching target element
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    // If element not found
    if(!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}