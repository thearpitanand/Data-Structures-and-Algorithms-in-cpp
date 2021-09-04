#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    int rollNumber;
    void setAge(int ageValue)
    {
        age = ageValue;
    }
    void printData()
    {
        cout << age << endl;
        cout << rollNumber << endl;
    }

    // Default Constructor
    Student()
    {
        cout << "Constructing Object" << endl;
        this->age = 0;
        this->rollNumber = 0;
        cout << "Constructed Object" << endl;
    };

    // Parameterized Constructor
    Student(int rollNumber)
    {
        cout << "Parameterized Construction of Object" << endl;
        this->age = 0;
        this->rollNumber = rollNumber;
        cout << "Parameterized Constructed the Object" << endl;
    }
    Student(int rollNumber, int age)
    {
        cout << "Parameterized Construction of Object" << endl;
        this->age = age;
        this->rollNumber = rollNumber;
        cout << "Parameterized Constructed the Object" << endl;
    }

    // Destructor
    // ~Student()
    // {
    //     cout << "Destructor Called" << endl;
    // }
};