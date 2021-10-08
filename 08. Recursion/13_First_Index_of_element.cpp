#include <bits/stdc++.h>
using namespace std;

// Searching from left to right using index
// {1, 2, 3, 4, 5}
//  -->  -->  -->
int firstIndex(int arr[], int size, int index, int key)
{
    // Base Case
    if (size == index)
        return -1;

    // Cheacking if array at index is equal to key
    if (arr[index] == key)
        return index;

    // firstIndex(arr, size, index + 1, key) --> Recursive Case
    return firstIndex(arr, size, index + 1, key);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int result = firstIndex(a, 5, 0, 9);
    string printString = result != -1 ? "First index of the element: " + to_string(result) : "Element Not Found";
    cout << printString << endl;

    return 0;
}