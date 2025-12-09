#include <iostream>
using namespace std;

class Stack {
    public:
        int *arr;      
        int capacity; 
        int top;      
    Stack(int cap) {
        capacity = cap;      
        arr = new int[capacity]; 
        top = -1;               
    }
    void push(int value){
        if(top == capacity-1){
            cout << "Stack overflow." << endl;
            return;
        }else{
            cout << "Value " << value << " Pushed into the Stack. " << endl;
            arr[++top] = value;
        }
    }
    void pop(){
        if(top == -1){
            cout << "Stack Underflow.";
            return;
        }else{
            cout << "Value " << arr[top] << " Popped from the stack."<<endl;;
            top --;
        }
    }
    void print(){
        while(top != -1){
            pop();
        }
    }
};

int main() {
    int cap;
    cout << "Enter stack size: ";cin >> cap;
    Stack s(cap);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    // s.print();
    return 0;
}
