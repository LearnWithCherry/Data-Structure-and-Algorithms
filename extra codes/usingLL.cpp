#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    // Insert element at rear
    void enqueue(int x) {
        Node* n = new Node(x);

        if (rear == NULL) {   
            front = rear = n;  
            return;
        }

        rear->next = n;
        rear = n;
    }

    // Delete element from front
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL)   // queue became empty
            rear = NULL;

        delete temp;
    }

    // Show front element
    int peek() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    // Display queue
    void display() {
        Node* t = front;
        while (t != NULL) {
            cout << t->data << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();  // 10 20 30

    q.dequeue();  
    q.display();  // 20 30

    cout << "Front = " << q.peek() << endl;

    return 0;
}
