#include <bits/stdc++.h>
using namespace std;

// Searching from left to right using index
// {1, 2, 3, 4, 5}
//  <--  <--  <--
int lastIndex(int arr[], int size, int index, int key)
{
    // Base Case
    if (index == -1)
        return -1;

    // Cheacking if array at index is equal to key
    if (arr[index] == key)
        return index;

    // lastIndex(arr, size, index - 1, key) --> Recursive Case
    return lastIndex(arr, size, index - 1, key);
}
int lastIndex(int arr[], int size, int key)
{
    // Base Case
    if (size == 0)
        return -1;

    // Cheacking if array at index is equal to key
    if (arr[size - 1] == key)
        return size - 1;

    // lastIndex(arr, size, index - 1, key) --> Recursive Case
    return lastIndex(arr, size - 1, key);
}

// Searching from right to left using index
// {1, 2, 3, 4, 5}
//  -->  -->  -->
int lastIndexRTL(int arr[], int size, int index, int key)
{
    // Base Case
    if (index == size)
        return -1;

    int indexInRem = lastIndexRTL(arr, size, index + 1, key);
    if (indexInRem == -1)
    {
        if (arr[index] == key)
            return index;
        else
            return -1;
    }
    else
    {
        return indexInRem;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 1};
    int response = lastIndex(a, 5, 1);
    string printString = response != -1 ? "Last index of the element: " + to_string(response) : "Element Not Found";
    cout << printString << endl;

    int response1 = lastIndexRTL(a, 5, 0, 3);
    string printString1 = response != -1 ? "Last index of the element: " + to_string(response1) : "Element Not Found";
    cout << printString1 << endl;
    return 0;
}