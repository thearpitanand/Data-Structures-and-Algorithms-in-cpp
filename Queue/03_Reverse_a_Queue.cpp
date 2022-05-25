#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    for (int i = 0; i < 10; i++)
    {
        int val = (i * 4) + 1;
        q.push(val);
        cout << val << " ";
    }
    cout << endl;
    cout << "Queue Size: " << q.size() << endl;

    stack<int> s;
    // Poping all element from queue and pushing it in stack
    for (int i = 0; !q.empty(); i++)
    {
        s.push(q.front());
        q.pop();
    }

    // Poping all element from stack and pushing it in queue
    for (int i = 0; !s.empty(); i++)
    {
        q.push(s.top());
        s.pop();
    }

    // Printing reversed queue
    for (int i = 0; !q.empty(); i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}