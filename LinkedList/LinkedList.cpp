#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void InsertAtEnd(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void InsertAtHead(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;
    head = n;
}

void Search(node *&head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "Search Found " << temp->data << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Search Not Found " << endl;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void DeleteNode(node **head_ref, int key)
{
    node *temp = *head_ref;
    node *prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;

        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            return;
        }
        prev->next = temp->next;

        delete temp;
    }
}

main()
{
    node *head = NULL;
    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);

    display(head);

    InsertAtHead(head, 4);
    display(head);
    Search(head, 5);
    DeleteNode(&head, 3);
    display(head);
}