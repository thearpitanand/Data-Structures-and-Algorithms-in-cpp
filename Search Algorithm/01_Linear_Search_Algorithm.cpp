#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            return (i + 1);
        }
    }
    return -1;
}

int main()
{
    int a[] = {9, 8, 5, 4, 2, 1};
    int index = linearSearch(a, 6, 25);
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