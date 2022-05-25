#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int x[], int y[], int start, int end)
{
    int arrayPointer = start;
    int i = start;
    int mid = (start + end) / 2;
    int j = mid + 1;
    // Assigning the value in array "arr" after sorting
    while (i <= mid && j <= end)
    {
        if (x[i] < y[j])
        {
            arr[arrayPointer] = x[i];
            arrayPointer++;
            i++;
        }
        else
        {
            arr[arrayPointer] = y[j];
            arrayPointer++;
            j++;
        }
    }
    // Puting the rest of the elements left in X array
    while (i <= mid)
    {
        arr[arrayPointer] = x[i];
        arrayPointer++;
        i++;
    }
    // Puting the rest of the elements left in Y array
    while (j <= end)
    {
        arr[arrayPointer] = y[j];
        arrayPointer++;
        j++;
    }

    return;
}
void mergeSort(int arr[], int start, int end)
{
    // Base Case
    if (start >= end)
        return;

    // Finding Mid
    int mid = (start + end) / 2;
    int x[100], y[100];
    // Puting first half of the array in X
    for (int i = 0; i <= mid; i++)
    {
        x[i] = arr[i];
    }
    // Puting other half of the array in Y
    for (int i = mid + 1; i <= end; i++)
    {
        y[i] = arr[i];
    }
    mergeSort(x, start, mid);
    mergeSort(y, mid + 1, end);
    // merging array x and y
    merge(arr, x, y, start, end);
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
    int arr[] = {5, 3, 4, 7, 8, 6, 1};
    printArray(arr, 7);
    mergeSort(arr, 0, 6);
    printArray(arr, 7);
    return 0;
}