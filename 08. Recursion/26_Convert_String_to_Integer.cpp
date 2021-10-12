#include <bits/stdc++.h>
using namespace std;

int convertStringToIntiger(char str[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    return (convertStringToIntiger(str, size - 1) * 10) + (str[size - 1] - '0');
}

int main()
{
    char str[] = "2908";
    int res = convertStringToIntiger(str, 4);
    cout << res;
    return 0;
}