#include <iostream>
using namespace std;

void selectionShort(int a[], int size)
{
    for (int i = 0; i <= size - 2; i++)
    {
        int smallestValueIndex = i;
        for (int j = i + 1; j < size - 1; j++)
        {
            if (a[i] > a[j])
            {
                smallestValueIndex = j;
            }
        }
        swap(a[i], a[smallestValueIndex]);
    }
}

int main()
{
    int a[] = {8, 2, 5, 0, 9};
    selectionShort(a, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}