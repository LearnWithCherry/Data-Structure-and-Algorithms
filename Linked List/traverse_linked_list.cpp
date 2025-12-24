#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to traverse and display the list
void traverse(Node* head) {
    Node* temp = head;           // start from the head
    while (temp != nullptr) {    // until end of list
        cout << temp->data << " -> ";
        temp = temp->next;       // move to next node
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating a simple linked list manually   
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    cout << "Traversing the linked list: ";
    traverse(head);

    return 0;
}
