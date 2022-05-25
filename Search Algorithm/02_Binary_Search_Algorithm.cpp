#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int size, int key)
{
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        // mid = start + ((end - start) / 2); //<-- We will use in case of Int overflow
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 5, 6, 8, 9, 11};
    int index = binarySearch(a, 6, 11);
    if (index != -1)
    {
        cout << "Value found at position: " << index << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }

    return 0;
}