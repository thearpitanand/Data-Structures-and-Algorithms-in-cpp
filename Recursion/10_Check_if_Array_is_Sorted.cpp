#include <bits/stdc++.h>
using namespace std;

// Checking Array from left to right.
// {1, 2, 3, 4, 5}
//  -->  -->  -->
bool isSorted(int arr[], int size)
{
    // Base Case
    if (size == 0 || size == 1)
        return true;

    // Checking if 0th element of array is greater then 1st element
    if (arr[0] > arr[1])
        return false;

    // Returing false if any part of the array is not sorted.
    // Returing true if the array is sorted.
    return isSorted(arr + 1, size - 1);
}
bool isSorted1(int arr[], int size)
{
    // Base case
    if (size == 0 || size == 1)
        return true;

    // Returing false if any part of the array is not sorted.
    if (!isSorted(arr + 1, size - 1))
        return false;

    // Checking if 0th element of array is greater then 1st element
    return (arr[0] > arr[1]) ? false : true;
}

// Checking array from right to left.
// {1, 2, 3, 4, 5}
//  <--  <--  <--
bool isSortedMethod2(int arr[], int size)
{
    // Base Case
    if (size == 0 || size == 1)
        return true;

    // Checking if (size - 2)th element of array is greater then (size - 1)th element
    if (arr[size - 2] > arr[size - 1])
        return false;

    // Returing false if any part of the array is not sorted.
    // Returing true if the array is sorted.
    return isSortedMethod2(arr, size - 1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    string sortedBool = isSorted(a, 6) ? "Sorted" : "Not Sorted";
    cout << sortedBool << endl;

    string sortedBool1 = isSorted1(a, 6) ? "Sorted" : "Not Sorted";
    cout << sortedBool1 << endl;

    string sortedBool2 = isSortedMethod2(a, 6) ? "Sorted" : "Not Sorted";
    cout << sortedBool2 << endl;
    return 0;
}