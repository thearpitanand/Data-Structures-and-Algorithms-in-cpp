#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{

    if (n < 0)
        return 1;
    // Base Case in PMI
    if (n == 0)
        return 1;

    return n * fact(n - 1);
    // fact(n-1) is 2nd step which is Induction Hypothisis where we assume that we have fact (n-1)
    // and n * fact( n - 1 ) is 3d step which is Induction Step where fact( n ) = { fact( n - 1 ) * n } is also true
}

int main()
{
    int n;
    cout << "Enter the number to find its factorial: ";
    cin >> n;
    int factorial = fact(n);
    cout << "Factorial: " << factorial << endl;
    return 0;
}