#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// Calculating Length of the Linked List
int length(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

// print and return the ith Node
Node *ithNode(Node *head, int index)
{
    int lengthOfLL = length(head);
    if (lengthOfLL == 0 || index > lengthOfLL - 1)
    {
        cout << "Value not found" << endl;
        return NULL;
    }
    Node *temp = head;
    int pointer = 0;
    while (pointer <= index && temp != NULL)
    {
        if (pointer == index)
        {
            cout << "Data at " << pointer << " index is: " << temp->data << endl;
            return temp;
        }
        pointer++;
    }
    return NULL;
}

// Inserting at tail
Node *takeInput()
{
    int value = 0;

    Node *head = NULL; // <-- Linked List is empty
    Node *tail = NULL; // <-- Linked List is empty

    int i = 1;
    while (value != -1)
    {
        // Taking value as input from user
        cout << "Enter Data " << i << " : ";
        cin >> value;
        if (value == -1)
            break;

        // Creating Linked List
        Node *n = new Node(value);

        // Cheack if it is First Node
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n; // <-- Inserting at tail
            tail = n;
        }
        i++;
    }
    return head;
}

// Inserting at head
Node *takeInputIAH()
{
    int value = 0;

    Node *head = NULL; // <-- Linked List is empty
    Node *tail = NULL; // <-- Linked List is empty

    int i = 1;
    while (value != -1)
    {
        // Taking value as input from user
        cout << "Enter Data " << i << " : ";
        cin >> value;
        if (value == -1)
            break;

        // Creating Linked List
        Node *n = new Node(value);

        // Cheack if it is First Node
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head; // <-- Inserting at tail
            head = n;
        }
        i++;
    }
    return head;
}

// Print Linked List
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
    // // Static linkedlist Creation
    // Node n1(2);
    // Node *head = &n1;
    // Node n2(3);
    // n1.next = &n2;
    // Node n3(4);
    // n2.next = &n3;
    // Node n4(5);
    // n3.next = &n4;
    // Node n5(6);
    // n4.next = &n5;
    // print(head);

    // // Dynamic linkedlist Creation
    // Node *n6 = new Node(7);
    // Node *head2 = n6;
    // Node *n7 = new Node(8);
    // n6->next = n7;
    // Node *n8 = new Node(9);
    // n7->next = n8;
    // print(head2);

    Node *Head = takeInputIAH();
    print(Head);
    cout << length(Head) << endl;
    Node *pointer = ithNode(Head, 2);
    cout << pointer->data << endl;

    return 0;
}