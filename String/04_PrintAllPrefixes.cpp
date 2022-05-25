#include <iostream>
using namespace std;

void printAllPrifixes(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << name[j];
        }
        cout << endl;
    }
}

int main()
{
    char name[100] = "ArpitAnand";
    printAllPrifixes(name);
    return 0;
}