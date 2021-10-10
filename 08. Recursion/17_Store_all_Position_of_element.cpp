#include <bits/stdc++.h>
using namespace std;

void storePos(int arr[], int size, int index, int key, vector<int> &ans)
{
    if (size == index)
    {
        return;
    }
    if (arr[index] == key)
    {
        ans.push_back(index);
    }
    storePos(arr, size, index + 1, key, ans);
}

int main()
{
    int a[] = {1, 2, 3, 2};
    vector<int> ans;
    storePos(a, 4, 0, 2, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}