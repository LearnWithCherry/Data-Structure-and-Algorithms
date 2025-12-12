#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
public:
    Node* front;
    Node* rear;

    // constructor
    Queue() {
        rear = front = nullptr;
    }

    bool empty() {
        return front == nullptr;   // LL queue uses this check
    }

    void push(int value){
        Node* newNode = new Node(value);
        if(empty()){
            front = rear = newNode;
        }else{
            rear -> next = newNode;
            rear = newNode;
        }
    }

    void pop(){
        if(empty()){
            cout << "Queue is Empty." << endl;
            return;
        }else{
            Node* temp = front;
            front = front -> next;
            delete temp;
        }
    }
    int start(){
        if(empty()){
            cout << "Queue is Empty." << endl;
            // return;
        }else{
            return front -> data;
        }
    }
    void print() {
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.print();

    q.pop();
    q.print();

    cout << "Value at starting of the Queue: " << q.start();
    return 0;
}
