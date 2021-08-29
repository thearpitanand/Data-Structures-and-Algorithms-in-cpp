#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the two numbers: " << endl;
    cin >> a;
    cin >> b;
    // Before Swaping
    cout << "Before Swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Swaping method one
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "After Swaping First" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Swaping method two (Using bitwise XOR Operator)
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After Swaping Second" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Swaping method three (using inbuilt function)
    swap(a, b);
    cout << "After Swaping Third" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}