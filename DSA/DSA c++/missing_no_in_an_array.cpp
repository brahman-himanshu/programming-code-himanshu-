

#include <iostream>
using namespace std;

int main() {

    int n = 6;
    int arr[n];

    cout << "Enter the array: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int xor1 = 0;
    int xor2 = 0;

    for(int i = 0; i < n - 1; i++) {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }

    xor1 = xor1 ^ n;

    cout << "Missing number = " << (xor1 ^ xor2);

    return 0;
}