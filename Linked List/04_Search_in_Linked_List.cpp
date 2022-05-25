#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// Finding data in LL
bool findData(Node *head, int data)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Finding data in LL using recursion
bool findDataR(Node *head, int data)
{
    if (head == NULL)
        return false;
    if (head->data == data)
        return true;
    return findDataR(head->next, data);
}

Node *takeInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value = 0;
    while (value != -1)
    {
        cout << "Enter the number: ";
        cin >> value;
        if (value == -1)
            break;
        Node *n = new Node(value);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    int data;
    Node *head = takeInput();
    print(head);
    cout << "Enter the number to find in Linked List: ";
    cin >> data;
    // bool isPresent = findData(head, data);
    bool isPresent = findDataR(head, data);
    if (isPresent)
    {
        cout << "Data Exist" << endl;
    }
    else
    {
        cout << "Data doesn't Exist" << endl;
    }
    return 0;
}