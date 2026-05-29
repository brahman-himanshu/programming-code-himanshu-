#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;

    int n = 5;
    int position = -1;

    for(int i = 0; i < n; i++) {

        if(arr[i] == target) {
            position = i;
            break;
        }
    }

    if(position != -1)
        cout << "Element found at index: " << position;
    else
        cout << "Element not found";

    return 0;
}