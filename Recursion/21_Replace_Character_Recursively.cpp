#include <bits/stdc++.h>
using namespace std;

void print(const char input[])
{
    if (input[0] == '\0')
    {
        cout << endl;
        return;
    }
    cout << input[0] << " ";
    print(input + 1);
}

void replace(char input[], char oldChar, char newChar)
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == oldChar)
    {
        input[0] = newChar;
    }
    replace(input + 1, oldChar, newChar);
}

int main()
{
    char c[] = "abc";
    replace(c, 'c', 'x');
    print(c);
    return 0;
}