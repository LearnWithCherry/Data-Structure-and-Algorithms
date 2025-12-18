#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {   // if list is empty
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) { // go till last node
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete at end
void delete_end(Node*& head) {
    if (head == nullptr) {   // empty list
        cout << "List is empty, nothing to delete.\n";
        return;
    }

    if (head->next == nullptr) {   // only one node
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {  // reach second last
        temp = temp->next;
    }

    delete temp->next;   // delete last node
    temp->next = nullptr;
}

// Display list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "List after insertions: ";
    displayList(head);

    delete_end(head);
    cout << "List after deleting last node: ";
    displayList(head);

    delete_end(head);
    cout << "List after deleting last node again: ";
    displayList(head);

    delete_end(head);
    cout << "List after deleting last node again: ";
    displayList(head);

    delete_end(head); // deleting from empty list
}
