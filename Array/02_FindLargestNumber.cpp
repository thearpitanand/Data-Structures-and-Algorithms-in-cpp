#include <iostream>
using namespace std;

int main()
{
    int largestNumber = INT_MIN;
    int a[10] = {5, 3, 98, 225, 7, 15, 8, 1, 84, 21};

    // Finding Largest Number
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
    {
        if (largestNumber < a[i])
        {
            largestNumber = a[i];
        }
    }
    cout << "The largest number is: " << largestNumber << endl;

    return 0;
}