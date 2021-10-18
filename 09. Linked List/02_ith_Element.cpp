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
void insertValueAtIthIndex(Node *head, int value, int index)
{
    Node *temp = head;
    int pointerIndex = 0;
    while (pointerIndex != index - 1)
    {
        temp = temp->next;
        pointerIndex++;
    }
    Node *n = new Node(value);
    n->next = temp->next;
    temp->next = n;
}
void deleteValueAtIthIndex(Node *&head, int index)
{
    if (!head)
        return;
    if (index == 0)
    {
        head = head->next;
        return;
    }
    Node *temp = head;
    int pointerIndex = 0;
    while (pointerIndex != index - 1)
    {
        temp = temp->next;
        pointerIndex++;
    }
    if (temp && temp->next)
    {
        Node *currentNode = temp->next;
        temp->next = currentNode->next;
        currentNode->next = NULL;
        delete currentNode;
    }
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

    insertValueAtIthIndex(head, 99999, 2);
    print(head);

    deleteValueAtIthIndex(head, 3);
    print(head);

    return 0;
}