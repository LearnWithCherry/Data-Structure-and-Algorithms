#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class stack{
    Node* top;
    int size; // actual size;   
public:
    stack(){ 
        top = nullptr;
        size = 0;
    }         
    // Push -> -> -> -> ->
    void push(int val){
        Node* temp = new Node(val);
        if(temp == nullptr){cout << "Stack OverFlow..!!";return ;}
        else{
            temp->next = top;
            top = temp;
            size++;
            cout << "Value " << top->data << " Pushed into the stack.." << endl;}}
    // POP <- <- <- <- <- <- <- 
    void pop(){
        if(top == NULL){cout << "Stack Underflow" << endl;return;
        }else{
            Node* temp = top;
            cout << "Value " << top->data << " Delete from the stack.." << endl;                    
            top = top -> next;
            delete temp;
        }
    }
    // PEEK  ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
    int peek(){
        if(top == NULL){return -1;cout << "Stack is Empty..";
        }else{
            cout << "Top element is: ";
            return top -> data;
        }
    }
    // IsEmpty ? ? ? ? ? ? ? 
    bool IsEmpty(){
        return top == NULL;
    }
    // IsSize ! ! ! ! ! ! ! !
    bool IsSize(){
        return size;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    cout << s.peek() << endl;
    cout << s.IsEmpty() << endl;
    cout << s.IsSize() << endl;
}
