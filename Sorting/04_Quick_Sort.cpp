#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivotIndex = start;
    int pivotElement = arr[end];
    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivotElement)
        {
            swap(arr[pivotIndex], arr[j]);
            pivotIndex++;
        }
    }
    swap(arr[pivotIndex], arr[end]);
    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int p = partition(arr, start, end);

    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

void printArray(int arr[], int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << "}" << endl;
}

int main()
{
    int arr[] = {5, 3, 4, 5, 5, 6, 5};
    printArray(arr, 7);
    quickSort(arr, 0, 6);
    printArray(arr, 7);

    return 0;
}