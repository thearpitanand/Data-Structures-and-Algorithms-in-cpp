#include <bits/stdc++.h>
using namespace std;

void findAllSubStr(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    findAllSubStr(input.substr(1), output);
    findAllSubStr(input.substr(1), output + input[0]);
}

void findAllSubStrUsingChar(char input[], char output[], int i)
{
    if (input[0] == '\0')
    {
        output[i] = '\0';
        cout << output << endl;
        return;
    }
    findAllSubStrUsingChar(input + 1, output, i);
    output[i] = input[0];
    findAllSubStrUsingChar(input + 1, output, i + 1);
}

int main()
{
    // Using String
    string in;
    string out;
    cout << "Enter A String To get its substring: ";
    cin >> in;
    findAllSubStr(in, out);

    // Using Character Array
    char input[100];
    cin >> input;
    char output[20];
    findAllSubStrUsingChar(input, output, 0);
    return 0;
}