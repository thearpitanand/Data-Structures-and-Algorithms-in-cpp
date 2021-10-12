#include <bits/stdc++.h>
using namespace std;

void findAllSubStr(string input, string output, vector<string> &arrayOfOutput)
{
    if (input.length() == 0)
    {
        arrayOfOutput.push_back(output);
        return;
    }
    findAllSubStr(input.substr(1), output, arrayOfOutput);
    findAllSubStr(input.substr(1), output + input[0], arrayOfOutput);
}

int main()
{
    string in;
    string out;
    vector<string> arrayOfOutput;
    cout << "Enter A String To get its substring: ";
    cin >> in;
    findAllSubStr(in, out, arrayOfOutput);
    cout << "Total Number of sub strings: " << arrayOfOutput.size() << endl;
    for (int i = 0; i < arrayOfOutput.size(); i++)
    {
        cout << arrayOfOutput[i] << endl;
    }

    return 0;
}