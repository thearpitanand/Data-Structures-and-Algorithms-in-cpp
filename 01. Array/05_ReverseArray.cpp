#include <iostream>
#include <string>
using namespace std;

void displayArray(int a[], string message = "Your Array is :")
{
    cout << message << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[10] = {5, 3, 98, 225, 7, 15, 8, 1, 84, 21};
    int j = ((sizeof(a) / sizeof(a[0])) - 1);

    displayArray(a, "Array Before Reversing");

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (j <= i)
        {
            break;
        }
        swap(a[i], a[j]);
        j--;
    }
    displayArray(a, "Array After Reversing");

    return 0;
}