#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value = 0) {
        data = value;
        next = NULL;
    }
};
class header_LL {
    Node* header;
public:
    header_LL() {
        header = new Node();  
    }
    void insert(int value) {
        Node* newNode = new Node(value);
        Node* temp = header;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = header->next;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    header_LL list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    return 0;
}
