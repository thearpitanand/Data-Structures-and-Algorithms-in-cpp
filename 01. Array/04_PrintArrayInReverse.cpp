#include <iostream>
using namespace std;
int main()
{
    int a[10] = {5, 3, 98, 225, 7, 15, 8, 1, 84, 21};

    // Printing array in reverse
    for (int i = ((sizeof(a) / sizeof(a[0])) - 1); i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}