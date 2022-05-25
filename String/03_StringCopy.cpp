#include <iostream>
#include <cstring>
using namespace std;

void copyString(char name[], char cpyData[])
{
    for (int i = 0; i < strlen(name); i++)
    {
        name[i] = cpyData[i];
    }
}
void copynString(char name[], char cpyData[], int length)
{
    int last;
    for (int i = 0; i <= length; i++)
    {
        name[i] = cpyData[i];
        last = i;
    }
    name[last] = '\0';
}
void concatinateString(char name[], char cpyData[])
{
    int cpyDataStartPointer = strlen(name);
    for (int i = 0; i < strlen(cpyData); i++)
    {
        name[cpyDataStartPointer] = cpyData[i];
        cpyDataStartPointer++;
    }
}

int main()
{
    char name[100] = "Arpit", cpData[100] = "Anand";
    cout << name << endl;

    copyString(name, cpData);
    cout << name << endl;

    copynString(name, cpData, 3);
    cout << name << endl;

    concatinateString(name, cpData);
    cout << name << endl;

    return 0;
}