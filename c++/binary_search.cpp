#include <iostream>
using namespace std;

int main()

{
    int n ;
  cout<<"enter the size of the array"<<" ";
cin>>n;

    int start = 0;
    int end = n-1;

    int target ;
    cout<<"enter the target for searching in array"<<" ";
    cin>>target;

 int arr[n];
 cout<<"enter the array "<<" ";
 for (int  i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 


    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == target)
        {
            cout << "Element found at index: " << mid;
            return 0;
        }

        else if(arr[mid] < target)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}