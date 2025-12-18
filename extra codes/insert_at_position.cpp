#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
};

void insertAtPos(Node* &head, int val, int pos)
{
    Node *newNode = new Node(val);
    if (pos == 1 || !head)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; temp && i < pos - 1; i++)
        temp = temp->next;
    if (!temp)
    {
        cout << "Position Out of Range...\n";
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node *head)
{
    for (Node *t = head; t; t = t->next)
        cout << t->data << " --> ";
    cout << "NULL\n";
}

int main()
{
    Node *head = NULL;
    insertAtPos(head, 10, 1);
    insertAtPos(head, 20, 2);
    insertAtPos(head, 30, 3);
    insertAtPos(head, 25, 2);
    insertAtPos(head, 99, 5);
    printList(head);
}
