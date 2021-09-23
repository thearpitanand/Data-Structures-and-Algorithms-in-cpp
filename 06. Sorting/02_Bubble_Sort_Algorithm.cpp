#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        for (int j = 0; j <= size - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void optimizedBubbleSort(int a[], int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        int noSwap = 0;
        for (int j = 0; j <= size - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                continue;
            }
            noSwap++;
            if (noSwap == size - 1 && i == 1)
            {
                cout << "No Swap Initiated" << endl;
                return;
            }
        }
    }
}

void optimizedBubbleSortUsingFlag(int a[], int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j <= size - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "No Swap Initiated" << endl;
            break;
        }
    }
}

int main()
{
    int a[] = {9, 8, 5, 4, 2, 1};
    // int a[] = {1, 5, 9, 10, 15, 16};
    // bubbleSort(a, 6);
    // optimizedBubbleSort(a, 6);
    // optimizedBubbleSortUsingFlag(a, 6);
    sort(a, a + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}