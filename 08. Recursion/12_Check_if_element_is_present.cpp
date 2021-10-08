#include <bits/stdc++.h>
using namespace std;

// Searching from left to right
// {1, 2, 3, 4, 5}
//  -->  -->  -->
bool searchingLTR(int arr[], int size, int key)
{
    // Base Case
    if (size == 0)
        return false;

    // Cheacking if array at index 0 is equal to key
    if (arr[0] == key)
        return true;

    // searchingLTR(arr + 1, size - 1, key) --> Recursive Case
    return searchingLTR(arr + 1, size - 1, key);
}

// Searching from left to right using index
// {1, 2, 3, 4, 5}
//  -->  -->  -->
bool searchingLTR(int arr[], int size, int index, int key)
{
    // Base Case
    if (size == index)
        return false;

    // Cheacking if array at index 0 is equal to key
    if (arr[index] == key)
        return true;

    // searchingLTR(arr, size, index + 1, key) --> Recursive Case
    return searchingLTR(arr, size, index + 1, key);
}

// Searching from right to left
// {1, 2, 3, 4, 5}
//  <--  <--  <--
bool searchingRTL(int arr[], int size, int key)
{
    // Base Case
    if (size == 0)
        return false;

    // Cheacking if array at last index is equal to key
    if (arr[size - 1] == key)
        return true;

    // searchingRTL(arr, size - 1, key) --> Recursive case
    return searchingRTL(arr, size - 1, key);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    string foundOrNotFoundLTR = searchingLTR(a, 5, 3) ? "Found" : "Not Found";
    cout << foundOrNotFoundLTR << endl;

    string foundOrNotFoundLTRUsingIndex = searchingLTR(a, 5, 0, 3) ? "Found" : "Not Found";
    cout << foundOrNotFoundLTRUsingIndex << endl;

    string foundOrNotFoundRTL = searchingRTL(a, 5, 3) ? "Found" : "Not Found";
    cout << foundOrNotFoundRTL << endl;

    return 0;
}