#include <iostream>
using namespace std;

int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char name[100];
    cout << "Enter Your Name: ";
    cin.getline(name, 100);
    cout << "Length of your name is: " << length(name) << endl;
    return 0;
}