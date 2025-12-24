#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }

    void insertAtPosition(int pos, int val) {
        Node* newnode = new Node(val);
        if (pos == 1) {
            newnode->next = head;
            head = newnode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Invalid Position\n";
            return;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insertAtPosition(1, 10);
    list.insertAtPosition(2, 20);
    list.insertAtPosition(2, 15);
    list.display();
}
