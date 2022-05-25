#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int arr[], int start, int end)
{
    if (start > end)
    {
        return true;
    }
    if (arr[start] == arr[end])
    {
        return checkPalindrome(arr, start + 1, end - 1);
    }
    return false;
}

int main()
{
    int a[] = {1, 3, 4, 4, 3, 1};
    if (checkPalindrome(a, 0, 5))
    {
        cout << "Number is Palindrome";
    }
    else
    {
        cout << "Number is not Palindrome";
    }
    return 0;
}