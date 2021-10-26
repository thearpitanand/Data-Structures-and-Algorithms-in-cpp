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
class Queue
{
    ListNode<Datatype> *headPtr;
    ListNode<Datatype> *tailPtr;
    int sizeOfLL;

public:
    Queue()
    {
        headPtr = NULL;
        tailPtr = NULL;
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

    Datatype front()
    {
        if (headPtr == NULL)
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return headPtr->val;
    }

    void pop()
    {
        if (headPtr == NULL)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        ListNode<Datatype> *delPtr = new ListNode<Datatype>();
        delPtr = headPtr;
        if (headPtr->next == NULL)
        {
            headPtr = NULL;
            tailPtr = NULL;
        }
        else
        {
            headPtr = headPtr->next;
        }
        delete delPtr;
        sizeOfLL--;
    }

    void push(Datatype value)
    {
        ListNode<Datatype> *newTail = new ListNode<Datatype>();
        newTail->val = value;
        newTail->next = NULL;
        if (headPtr == NULL && tailPtr == NULL)
        {
            headPtr = newTail;
            tailPtr = newTail;
        }
        else
        {
            tailPtr->next = newTail;
            tailPtr = newTail;
        }
        sizeOfLL++;
    }
};

int main()
{
    string TF;
    // Integer
    Queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.front() << " ";
    s.pop();
    cout << s.front() << " ";
    s.pop();
    cout << s.front() << " ";
    s.pop();
    cout << endl;

    cout << s.size() << endl;

    TF = s.isEmpty() ? "True" : "False";
    cout << TF << endl;

    // Character
    Queue<char> s1;
    s1.push(97);
    s1.push(98);
    s1.push(99);
    s1.push(100);
    s1.push(101);

    cout << s1.front() << " ";
    s1.pop();
    cout << s1.front() << " ";
    s1.pop();
    cout << s1.front() << " ";
    s1.pop();
    cout << endl;

    cout << s1.size() << endl;

    TF = s.isEmpty() ? "True" : "False";
    cout << TF << endl;
    // Poping rest of two elements
    s1.pop();
    s1.pop();
    TF = s1.isEmpty() ? "True" : "False";
    cout << TF << endl;

    return 0;
}