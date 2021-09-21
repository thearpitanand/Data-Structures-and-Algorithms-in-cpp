#include <iostream>
using namespace std;

class DynamicArray
{
private:
    int *data;
    int nextIndex;
    int capacity; // Total size of array

public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    DynamicArray(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        // this->data = d.data //<-Shallow copy

        // Deep copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }
    DynamicArray(int capacity)
    {
        data = new int[capacity];
        this->nextIndex = 0;
        this->capacity = capacity;
    }
    void operator=(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;

        // Deep Copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            capacity = capacity * 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int i)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            add(element);
        }
        else
        {
            return;
        }
    }

    int get(int i) const
    {
        if (i >= 0 && i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int getCapacity() const
    {
        return capacity;
    }
};

int main()
{
    DynamicArray d1; // Our default Constructor
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(70);
    cout << "d1: ";
    d1.print();
    cout << "Capacity: " << d1.getCapacity() << endl;

    DynamicArray d2(d1); // Copy constructor - Shallow Copy
    d2.add(10000, 0);
    cout << "d1: ";
    d1.print();
    cout << "d2: ";
    d2.print();

    DynamicArray d3; // Our default constructor
    d3 = d1;         // Copy assignment operator - Shallow Copy
    d3.add(9999, 1);
    cout << "d1: ";
    d1.print();
    cout << "d2: ";
    d2.print();
    cout << "d3: ";
    d3.print();

    DynamicArray d4(100); //Parameterized Constructor
    cout << "Capacity: " << d4.getCapacity() << endl;

    return 0;
}