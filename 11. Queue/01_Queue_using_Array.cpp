// 0 1 2 3 4 5 6 7 8 9
// (nextIndex + 1) + (capacity - first index) == capacity
#include <bits/stdc++.h>
using namespace std;

template <typename Datatype>
class Queue
{
    Datatype *arr;
    int size;

public:
    int nextIndex;
    int capacity;
    int firstIndex;
    Queue()
    {
        capacity = 4;
        size = 0;
        nextIndex = 0;
        firstIndex = -1;
        arr = new Datatype[capacity];
    }

    int sizeV()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    Datatype front()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return arr[firstIndex];
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0)
        {
            nextIndex = 0;
            firstIndex = -1;
        }
    }

    void push(Datatype value)
    {
        if (size == capacity)
        {
            Datatype *newArr = new Datatype[capacity * 2];
            int itr = 0;
            for (int j = firstIndex; j < capacity; j++)
            {
                newArr[itr] = arr[j];
                itr++;
            }
            for (int j = 0; j < firstIndex; j++)
            {
                newArr[itr] = arr[j];
                itr++;
            }
            delete[] arr;
            arr = newArr;
            nextIndex = itr;
            firstIndex = 0;
            capacity = capacity * 2;
        }
        arr[nextIndex] = value;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
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
    s.pop();
    s.pop();
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    cout << s.front() << " ";
    s.pop();
    cout << s.front() << " ";
    s.pop();
    cout << s.front() << " ";
    s.pop();
    cout << s.front() << " ";
    s.pop();
    cout << s.front() << " ";
    s.pop();
    cout << s.front() << " ";
    s.pop();
    cout << endl;

    cout << "Size Now: " << s.sizeV() << endl;

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

    cout << s1.sizeV() << endl;

    TF = s1.isEmpty() ? "True" : "False";
    cout << TF << endl;

    // Poping rest of two elements
    s1.pop();
    s1.pop();
    TF = s1.isEmpty() ? "True" : "False";
    cout << TF << endl;

    return 0;
}