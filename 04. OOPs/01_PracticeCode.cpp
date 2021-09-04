#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    // Create the objects statically
    // Student s2;      // <- calling default constructor
    Student s1(29);     // <- calling parameterized constructor
    Student s3(29, 34); // <- calling parameterized constructor

    s1.setAge(21);

    // Printing data
    s1.printData();
    s3.printData();

    // Creating objects dynamically
    Student *s6 = new Student;          // <- calling default constructor
    Student *s7 = new Student(27);      // <- calling parameterized constructor
    Student *s8 = new Student(119, 32); // <- calling parameterized constructor

    // (*s6).rollNumber = 999999;

    (*s6).setAge(4894894);
    s6->rollNumber = 99944;
    s6->printData();

    Student s9(s1); // <- Calling inbuilt copy constructor
    s9.printData();

    Student s10(*s6); // <- Calling inbuilt copy constructor
    s10.printData();

    Student *s12 = new Student(*s6); // <- Calling inbuilt copy constructor
    s12->printData();

    Student s13;
    s13 = s1; // <- Copy Assignment Operator
    s13.printData();

    delete s6, s7, s8, s12;
    return 0;
}
