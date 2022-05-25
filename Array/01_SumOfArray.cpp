#include <iostream>
using namespace std;

int main()
{
    int sumOfArray = 0;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
    {
        sumOfArray += a[i];
    }
    cout << "The sum of the array: " << sumOfArray << endl;

    return 0;
}