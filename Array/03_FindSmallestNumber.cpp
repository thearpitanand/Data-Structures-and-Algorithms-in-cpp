#include <iostream>
using namespace std;

int main()
{
    int smallestNumber = INT_MAX;
    int a[10] = {5, 3, 98, 225, 7, 15, 8, 1, 84, 21};

    // Finding Smallest Number
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
    {
        if (smallestNumber > a[i])
        {
            smallestNumber = a[i];
        }
    }
    cout << "The largest number is: " << smallestNumber << endl;

    return 0;
}