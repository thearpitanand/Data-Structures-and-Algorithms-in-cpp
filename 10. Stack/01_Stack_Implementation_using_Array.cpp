#include <bits/stdc++.h>
using namespace std;

template <typename Datatype>
class Stack
{
    Datatype *arr;
    int nextIndex;
    int capacity;

public:
    Stack()
    {
        capacity = 4;
        arr = new Datatype[capacity];
        nextIndex = 0;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        if (nextIndex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    Datatype top()
    {
        if (isEmpty())
        {
            cout << "Stack  is Empty" << endl;
            return 0;
        }
        return arr[nextIndex - 1];
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack  is Empty" << endl;
            return;
        }
        --nextIndex;
    }

    void push(Datatype value)
    {
        if (nextIndex == capacity)
        {
            Datatype *newArr = new Datatype[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
            capacity = capacity * 2;
        }
        arr[nextIndex] = value;
        nextIndex++;
    }
};

int main()
{
    // Integer
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << endl;

    cout << s.size() << endl;
    cout << s.isEmpty() << endl;

    // Character
    Stack<char> s1;
    s1.push(97);
    s1.push(98);
    s1.push(99);
    s1.push(100);
    s1.push(101);

    cout << s1.top() << " ";
    s1.pop();
    cout << s1.top() << " ";
    s1.pop();
    cout << s1.top() << " ";
    s1.pop();
    cout << endl;

    cout << s1.size() << endl;
    cout << s1.isEmpty() << endl;

    return 0;
}