#include <bits/stdc++.h>
using namespace std;

// Suming from left to right
// {1, 2, 3, 4, 5}
//  -->  -->  -->
int sumOfArrayLTR(int arr[], int size)
{
    // Base Case
    if (size == 1)
        return arr[size - 1];

    // sumOfArrayLTR(arr + 1, size - 1) --> Recursice case
    // Calculation
    return arr[0] + sumOfArrayLTR(arr + 1, size - 1);
}

// Suming from left to right using index i
// {1, 2, 3, 4, 5}
//  -->  -->  -->
int sumOfArrayLTR(int arr[], int size, int i)
{
    // Base Case
    if (size == i)
        return 0;

    // sumOfArrayLTR(arr, size, i + 1) --> Recursice case
    // Calculation
    return arr[i] + sumOfArrayLTR(arr, size, i + 1);
}

// Suming from right to left
// {1, 2, 3, 4, 5}
//  <--  <--  <--
int sumOfArrayRTL(int arr[], int size)
{
    // Base case
    if (size == 1)
        return arr[size - 1];

    // sumOfArrayRTL(arr + 1, size - 1) --> Recursice case
    // Calculation
    return sumOfArrayRTL(arr, size - 1) + arr[size - 1];
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cout << "Sum of Array LTR: " << sumOfArrayLTR(a, 5) << endl;
    cout << "Sum of Array LTR using index: " << sumOfArrayLTR(a, 5, 0) << endl;
    cout << "Sum of Array RTL: " << sumOfArrayRTL(a, 5) << endl;
    return 0;
}