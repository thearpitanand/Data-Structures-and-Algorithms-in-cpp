#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    //Base Case
    if (n == 0)
        return 0;

    // sum(n / 10) -> Recursive Case
    // Calculation
    return (n % 10) + sum(n / 10);
}
int main()
{
    cout << "Sum of Digits in 12345: " << sum(12345) << endl;
    cout << "Sum of Digits in 123456789: " << sum(123456789) << endl;
    return 0;
}