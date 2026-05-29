#include <iostream>
using namespace std;

int main() {

    // First array
    int a[3] = {1, 2, 3};

    // Second array
    int b[3] = {4, 5, 6};

    // Array to store sum
    int sum[3];

    // Loop for addition
    for(int i = 0; i < 3; i++) {

        // Add elements
        sum[i] = a[i] + b[i];

        // Print result
        cout << sum[i] << " ";
    }

    return 0;
}