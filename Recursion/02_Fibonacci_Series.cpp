#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    // Using Princple of Mathematical Induction

    // Base Case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive case
    int smallOutput1 = fib(n - 1);
    int smallOutput2 = fib(n - 2);

    // Calculation
    return smallOutput1 + smallOutput2;
}

int main()
{
    int n;
    cout << "Enter the index to get fibonacci number at that index: ";
    cin >> n;
    int fibonacci = fib(n);
    cout << "Fibonacci( " << n << " ) = " << fibonacci << endl;
    return 0;
}