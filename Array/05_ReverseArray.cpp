#include <iostream>
#include <string>
using namespace std;

// Print Array
void displayArray(int a[], string message = "Your Array is :")
{
    cout << message << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Swaping two Elemets
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Reversing Array
void reverseArray(int a[], int sizeOfArray)
{
    int j = sizeOfArray - 1;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (j <= i)
        {
            break;
        }
        swap(a[i], a[j]);
        j--;
    }
}

int main()
{
    int a[10] = {5, 3, 98, 225, 7, 15, 8, 1, 84, 21};
    int sizeOfArray = sizeof(a) / sizeof(a[0]);

    displayArray(a, "Array Before Reversing");
    reverseArray(a, sizeOfArray);
    displayArray(a, "Array After Reversing");

    return 0;
}