/*
element is inserted into the stack
display the top most element
element is popped from the stack
exit after displayed top element
*/
#include <iostream>
#define MAX_SIZE 100
using namespace std;

class Stack {
    int top;
    int arr[MAX_SIZE];

public:
    Stack() { top = -1; }

    void push(int val) {
        if(top == MAX_SIZE - 1){
            cout << "Stack Overflow..!"<< endl;
            return;
        }
        arr[++top] = val;
        cout << val << " Insert into stack.." << endl;
    }
    int pop(){
        if (top < 0){
            cout << "Stack is empty.." << endl;
            return -1;
        }
        int val = arr[top--];
        cout << val << " Popped in empty.." << endl;
        return val;
    }
    int peek(){
        if(top < 0){
            cout << "Stack is empty.." << endl;
            return;
        }
        cout << "Top most element.." << arr[top] << endl;
        return arr[top];
    }
    bool isEmpty(){
        return (top < 0);
    }
};

int main() {
    Stack s;
    while(true){ }
    return 0;
}
