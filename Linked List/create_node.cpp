#include <iostream>
using namespace std;

// Define Node class
class Node {
public:
    int data;      // actual data
    Node* next;    // pointer to next node

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;   // initially no next node
    }
};

int main() {
    // Create first node
    Node* first = new Node(10);

    // Create second node
    Node* second = new Node(20);

    // Link first -> second
    first->next = second;

    // Print details
    cout << "First Node Data: " << first->data << endl;
    cout << "First Node Next (address of second): " << first->next << endl;

    cout << "Second Node Data: " << second->data << endl;
    cout << "Second Node Next (NULL): " << second->next << endl;

    return 0;
}
