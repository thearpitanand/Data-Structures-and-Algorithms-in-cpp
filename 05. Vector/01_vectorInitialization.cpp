#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> *vd = new vector<int>(); // <-- Dunamic Allocation
    // vector<int> v; // <-- Static Allocation
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.pop_back();

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v.at(i) << " ";
    // }
    // cout << endl;

    vector<int> v1;
    for (int i = 1; i <= 100; i++)
    {
        v1.push_back(i * i);
        cout << "Size: " << v1.size() << endl;
        cout << "Capacity: " << v1.capacity() << endl;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;

    sort(v1.begin(), v2.end());

    return 0;
}