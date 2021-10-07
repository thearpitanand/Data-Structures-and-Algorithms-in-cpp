#include <bits/stdc++.h>
using namespace std;

int countZero(int n)
{
    //Base Case
    if (n == 0)
        return 0;

    /*
    --> countZero(n / 10) -> Recursive Case
    --> Calculation (Used Ternary Operator (?:) insted of if else)
        Syntax: 
            > The conditional operator is of the form:
                variable = Expression1 ? Expression2 : Expression3

            > It can be visualized into if-else statement as:
                if(Expression1)
                {
                    variable = Expression2;
                }
                else
                {
                    variable = Expression3;
                }
    */
    return ((n % 10) == 0) ? 1 + countZero(n / 10) : countZero(n / 10);
}
int main()
{
    cout << "Number of Zeros in 1020304050: " << countZero(1020304050) << endl;
    cout << "Number of Zeros in 10203040: " << countZero(10203040) << endl;
    return 0;
}