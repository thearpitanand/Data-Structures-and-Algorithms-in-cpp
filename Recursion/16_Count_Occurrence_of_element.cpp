#include <bits/stdc++.h>
using namespace std;

int occurrence(int arr[], int size, int index, int key)
{
    if (size == index)
    {
        return 0;
    }
    if (arr[index] == key)
    {
        return 1 + occurrence(arr, size, index + 1, key);
    }
    return occurrence(arr, size, index + 1, key);
}

int main()
{
    int a[] = {1, 2, 3, 2};
    cout << occurrence(a, 4, 0, 1);
    return 0;
}