#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 5, 7, 9};

    int start = 0;
    int end = 4;

    int target = 7;

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