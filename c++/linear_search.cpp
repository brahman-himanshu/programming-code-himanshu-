#include <iostream>
using namespace std;

int main() {
   int n ,target;
    cout<<"enter the value of n for the array ";
    cin>>n;
   int  arr[n];
    cout<<"enter the array "<<" ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target who found in the array ";
    cin>> target;

    int position = -1;

    for(int i = 0; i < n; i++) {

        if(arr[i] == target) {
            position = i;
            break;
        }
    }

    if(position != -1)
        cout << "Element found at index: " << position  << "and the element is :" << arr[position];
    else
        cout << "Element not found";

    return 0;
}