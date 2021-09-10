#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student
{
private:
    int age;
    char *name;

public:
    Student(int const age, char const *name)
    {
        this->age = age;
        // this->name = name;                    // <-- Shallow Copy
        this->name = new char[strlen(name) + 1]; // <-- Deep Copy
        strcpy(this->name, name);
    }
    void display()
    {
        cout << "The student name \"" << this->name << "\" is of age " << this->age << "." << endl;
    }
};

int main()
{
    char name[] = "Hello";
    Student s1(21, name);
    s1.display();

    name[4] = 'A';
    Student s2(31, name);
    s2.display();

    s1.display();
    return 0;
}