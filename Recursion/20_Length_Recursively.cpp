#include <bits/stdc++.h>
using namespace std;

int getLength(char input[])
{
    if (input[0] == '\0')
    {
        return 0;
    }
    return 1 + getLength(input + 1);
}

int main()
{
    char c[] = "abc";
    int charLen = getLength(c);
    cout << charLen << endl;
    return 0;
}