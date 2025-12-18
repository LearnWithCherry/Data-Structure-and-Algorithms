#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;}
};
class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;}

    void append(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;}

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;}

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl; }
};

int main() {
    LinkedList list;
    cout << "List: "; 
    list.append(1);

    list.append(3);

    list.append(5);
    
    list.print();
    return 0;
}