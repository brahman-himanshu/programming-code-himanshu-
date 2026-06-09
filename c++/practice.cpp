
//input n number

// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cin >> n;
//     cout<<"n = "<<n<<endl;
// }

//input n number and print 

// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cin>>n;
//     for(int i =0; i<n;i++){
//         cout<<i<<endl;
//     }
// }

//input array 
 
// #include<iostream>
// using namespace std;
// int main (){
//     int i,n;
//     cin>>n;
//     cout<<"n = "<<n<<endl;
//    int  arr[n];
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<n;i++){
//         cout<<" arr["<<i<<"] = "<< arr[i] <<endl;
//     }
//     return 0 ;
// }


// sum of two array 

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr1[n], arr2[n], arr3[n];

//     cout << "Enter first array elements:\n";
//     for(i = 0; i < n; i++) {
//         cin >> arr1[i];
//     }

//     cout << "Enter second array elements:\n";
//     for(i = 0; i < n; i++) {
//         cin >> arr2[i];
//     }

//     for(i = 0; i < n; i++) {
//         arr3[i] = arr1[i] + arr2[i];
//     }

//     cout << "Array 3 (Sum Array): ";
//     for(i = 0; i < n; i++) {
//         cout << arr3[i] << " ";
//     }

//     return 0;
// }




// linear search 


// #include<iostream>
// using namespace std;

// int main() {
//     int target, i, n;

//     cout << "Enter the size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter the array elements:\n";
//     for(i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the target: ";
//     cin >> target;

//     bool found = false;

//     for(i = 0; i < n; i++) {
//         if(arr[i] == target) {
//             found = true;
//             break;
//         }
//     }

//     if(found) {
//         cout << "Target Found";
//     }
//     else {
//         cout << "Target Not Found";
//     }

//     return 0;
// }


// 


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int left = 0, right = n - 1;
    int found = -1;

    while(left <= right) {
        int mid = (left + right) / 2;

        if(arr[mid] == target) {
            found = mid;
            break;
        }
        else if(arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if(found != -1)
        cout << "Element found at index " << found << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}