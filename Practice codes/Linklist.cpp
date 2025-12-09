#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
class LinkList{
    public:
        Node* head;
        Node* tail;
    LinkList(){
        head = tail = nullptr;
    }

    void pushfront(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = tail = newNode;
            return;
        }else{
            newNode -> next = head;
            head = newNode;
        }
    }
    void pushback(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = tail = newNode;
            return;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    void popfront(){
        if(head == nullptr){
            cout <<"List is Empty."<< endl;
            return;
        }else{
            Node* temp = head;
            head = head -> next;
            temp -> next = nullptr;
            delete temp;
        }
    }
    void popback(){
        if(tail == nullptr){
            cout <<"List is Empty."<< endl;
            return;
        }else{
            Node* temp = head;
            while(temp -> next != tail){
                temp = temp -> next;
            }
            temp -> next = nullptr;
            delete tail;
            tail = temp;
        }
    }
    void insertmiddle(int value, int position){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            Node* temp = head;
            for(int i=0; i<position-1; i++){
                if(temp == NULL){cout << "Invalid Index.";}
                temp = temp -> next;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }
    int search(int key){
            Node* temp = head;
            int index = 0;
            while(temp != NULL){
                if(temp -> data == key){
                    return index;
                }
                temp = temp -> next;
                index ++;
            }
            return -1;
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL.";
    }
};
int main() {
    LinkList l;
    l.pushback(7);
    l.pushback(5);
    l.print();
    cout << endl;                        
    l.pushfront(10);
    l.pushfront(20);
    l.pushfront(30);
    l.print();
    cout << endl;
    l.popfront();
    l.print();
    cout << endl;
    l.popback();
    l.print();
    cout << endl;
    l.insertmiddle(50,2);
    l.print();
    cout << endl;
    cout << l.search(10);
    return 0;
}