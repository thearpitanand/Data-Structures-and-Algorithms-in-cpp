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

void removeConsecutiveDuplicates(char input[])
{
    if (input[0] == '\0')
        return;
    if (input[0] == input[1])
    {
        for (int i = 0; input[i] != '\0'; i++)
        {
            input[i] = input[i + 1];
        }
        removeConsecutiveDuplicates(input);
    }
    else
    {
        removeConsecutiveDuplicates(input + 1);
    }
}

int main()
{
    char c[] = "aaaaabcccccddeaa";
    print(c);
    removeConsecutiveDuplicates(c);
    print(c);
    return 0;
}