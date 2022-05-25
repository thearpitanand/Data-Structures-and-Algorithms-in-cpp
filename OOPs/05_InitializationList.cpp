// Initialization List -> Initialise const properties and reference properties at the time of memory allocation.
#include <iostream>
using namespace std;
class Student
{
private:
    int age;
    const int rollNumber;
    int &ageAddress;

public:
    Student(int rollN, int age) : rollNumber(rollN), age(age), ageAddress(this->age){}; // <- Initialization List
};

int main()
{
    Student s1(2908, 21);
    return 0;
}