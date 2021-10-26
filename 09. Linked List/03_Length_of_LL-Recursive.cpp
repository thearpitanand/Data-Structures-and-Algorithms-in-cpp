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

int length(Node *head)
{
    if (head == NULL)
        return 0;
    return 1 + length(head->next);
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

    Node *head = takeInput();
    print(head);

    cout << "Length of the LL is: " << length(head) << endl;

    return 0;
}