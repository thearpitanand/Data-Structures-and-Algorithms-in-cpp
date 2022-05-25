#include <bits/stdc++.h>
using namespace std;

void printNumberAsc(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Recursive Call
    printNumberAsc(n - 1); //<-- 1 2 3 4 5 ...... (n - 1)

    // Calculation
    cout << n << " ";
}

void printNumberDec(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Calculation
    cout << n << " ";

    // Recursive Call
    printNumberDec(n - 1); //<-- (n - 1) ...... 5 4 3 2 1
}

int main()
{
    printNumberAsc(10);
    cout << endl;
    printNumberDec(10);
    return 0;
}