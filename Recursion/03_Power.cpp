#include <bits/stdc++.h>
using namespace std;

int pow(int n, int power)
{
    // Base Case
    if (power == 0)
        return 1;

    // pow(n, power - 1) is a recursive case
    // Calculation
    return n * pow(n, power - 1);
}

int main()
{
    cout << "5 ^ 0 = " << pow(5, 0) << endl;
    cout << "5 ^ 1 = " << pow(5, 1) << endl;
    cout << "5 ^ 2 = " << pow(5, 2) << endl;
    cout << "5 ^ 3 = " << pow(5, 3) << endl;
    cout << "5 ^ 4 = " << pow(5, 4) << endl;
    cout << "5 ^ 5 = " << pow(5, 5) << endl;
    cout << "5 ^ 6 = " << pow(5, 6) << endl;
    cout << "5 ^ 7 = " << pow(5, 7) << endl;
    cout << "5 ^ 8 = " << pow(5, 8) << endl;
    cout << "5 ^ 9 = " << pow(5, 9) << endl;
    cout << "5 ^ 10 = " << pow(5, 10) << endl;
    return 0;
}