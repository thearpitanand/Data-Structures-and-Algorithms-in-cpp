#include <bits/stdc++.h>
using namespace std;

void printPos(int arr[], int size, int index, int key)
{
    if (size == index)
    {
        cout << endl;
        return;
    }
    if (arr[index] == key)
    {
        cout << index << " ";
    }
    printPos(arr, size, index + 1, key);
}

int main()
{
    int a[] = {1, 2, 3, 2};
    printPos(a, 4, 0, 2);
    return 0;
}