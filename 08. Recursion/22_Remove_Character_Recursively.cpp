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

void removeElement(char input[], char element)
{
    if (input[0] == '\0')
        return;
    if (input[0] != element)
    {
        removeElement(input + 1, element);
    }
    else
    {
        for (int i = 0; input[i] != '\0'; i++)
        {
            input[i] = input[i + 1];
        }
        removeElement(input, element);
    }
}

int main()
{
    char c[] = "abc";
    print(c);
    removeElement(c, 'a');
    print(c);
    return 0;
}