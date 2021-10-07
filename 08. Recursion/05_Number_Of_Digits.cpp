#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    //Base Case
    if (n == 0)
        return 0;

    // count(n/10) -> Recursive Case
    // Calculation
    return 1 + count(n / 10);
}
int main()
{
    cout << "Number of Digits in 12345: " << count(12345) << endl;
    cout << "Number of Digits in 123456789: " << count(123456789) << endl;
    return 0;
}