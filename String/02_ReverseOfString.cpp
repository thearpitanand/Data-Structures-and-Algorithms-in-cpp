#include <iostream>
using namespace std;

int length(char *array)
{
    int count = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char *array)
{
    int startPointer = 0, endPointer;
    endPointer = length(array) - 1;
    while (startPointer <= endPointer)
    {
        swap(array[startPointer], array[endPointer]);
        startPointer++;
        endPointer--;
    }
}

int main()
{
    char line[100];
    cout << "Enter the string you want to reverse: ";
    cin.getline(line, 100);
    reverseString(line);
    cout << "Reverse of your string is: " << line << endl;
    return 0;
}