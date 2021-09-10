#include <iostream>
using namespace std;

// Static Properties -> These properties belongs to the class.
// 1) Static functions can only access static data members and can
//    call only static functions.
// 2) Static functions do not have this key word.

class Student
{
public:
    int rollNumber;
    int age;
    static int totalNumberOfStudent; // Static Propertie.

    static int getTotalStudents() // Static Functions.
    {
        return totalNumberOfStudent;
    }
    static void setTotalStudents(int ts) // Static Functions.
    {
        totalNumberOfStudent = ts;
    }
};

int Student::totalNumberOfStudent = 0; // Intializing static data members.

int main()
{
    cout << "Total Number of students are: " << Student::totalNumberOfStudent << endl;
    cout << "Total Number of students are: " << Student::getTotalStudents() << endl;
    return 0;
}