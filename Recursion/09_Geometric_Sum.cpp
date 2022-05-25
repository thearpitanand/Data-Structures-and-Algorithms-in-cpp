#include <bits/stdc++.h>
using namespace std;

float GeometricSum(int n)
{
    // Base Case
    if (n == 0)
        return 1;

    // GeometricSum(n - 1) -> Recursive Case
    // Calculation
    return GeometricSum(n - 1) + (1 / pow(2, n));
}
int main()
{
    cout << "Geometric sum of 3: " << GeometricSum(3) << endl;
    return 0;
}