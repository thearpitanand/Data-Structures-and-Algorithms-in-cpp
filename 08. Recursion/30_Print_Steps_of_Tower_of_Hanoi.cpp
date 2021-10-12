#include <bits/stdc++.h>
using namespace std;

int toh(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return toh(n - 1) + 1 + toh(n - 1);
}

void printTOH(int numberOfDisk, char source, char helper, char destination)
{
    if (numberOfDisk == 0)
    {
        return;
    }
    // Transfering from A to B
    printTOH(numberOfDisk - 1, source, destination, helper);
    cout << "Moving disk " << numberOfDisk << " from " << source << " to " << destination << endl;
    // Transfering from B to C
    printTOH(numberOfDisk - 1, helper, source, destination);
}

int main()
{
    cout << "Number of steps: " << toh(5) << endl;
    printTOH(5, 'A', 'B', 'C');
    return 0;
}