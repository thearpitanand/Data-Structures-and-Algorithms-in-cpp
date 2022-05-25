#include <bits/stdc++.h>
using namespace std;

template <typename Datatype>
class ListNode
{
public:
    int val;
    ListNode *next;
};

template <typename Datatype>
class Stack
{
    ListNode<Datatype> *headPtr;
    int sizeOfLL;

public:
    Stack()
    {
        headPtr = NULL;
        sizeOfLL = 0;
    }

    int size()
    {
        return sizeOfLL;
    }

    bool isEmpty()
    {
        return sizeOfLL == 0;
    }

    Datatype top()
    {
        if (headPtr == NULL)
        {
            cout << "Stack  is Empty" << endl;
            return 0;
        }
        return headPtr->val;
    }

    void pop()
    {
        if (headPtr == NULL)
        {
            cout << "Stack  is Empty" << endl;
            return;
        }
        ListNode<Datatype> *delPtr = new ListNode<Datatype>();
        delPtr = headPtr;
        headPtr = headPtr->next;
        delete delPtr;
        sizeOfLL--;
    }

    void push(Datatype value)
    {
        ListNode<Datatype> *newHead = new ListNode<Datatype>();
        newHead->val = value;
        newHead->next = headPtr;
        headPtr = newHead;
        sizeOfLL++;
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