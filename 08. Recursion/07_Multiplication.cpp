// Multiply two numbers using plus(+) operator.
#include <bits/stdc++.h>
using namespace std;

int multiplie(int number, int numberOfTimes)
{
    // Base Case
    if (numberOfTimes == 0)
        return 0;

    // multiplie(number, numberOfTimes - 1) -> recursive case
    // Calculation
    return number + multiplie(number, numberOfTimes - 1);
}
int main()
{
    cout << "12 * 10: " << multiplie(12, 10) << endl;
    cout << "9 * 5: " << multiplie(9, 5) << endl;
    return 0;
}