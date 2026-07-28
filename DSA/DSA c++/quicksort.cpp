#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];   // First element as pivot

    int i = low;
    int j = high;

    while (i < j)
    {
        // Move i until an element greater than pivot is found
        while (arr[i] <= pivot && i < high)
            i++;

        // Move j until an element less than or equal to pivot is found
        while (arr[j] > pivot && j > low)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    // Put pivot in its correct position
    swap(arr[low], arr[j]);

    return j;   // Pivot index
}

void quickSort(vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    vector<int> arr = {7, 2, 1, 6, 8, 5, 3, 4};

    quickSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}