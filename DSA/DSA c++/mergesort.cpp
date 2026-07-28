#include <iostream>
#include <vector>
using namespace std;

// Merge function
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Compare elements from both halves
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining left half
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining right half
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy temp back into original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// Merge Sort
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);

    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int x : arr)
        cout << x << " ";

    return 0;
}