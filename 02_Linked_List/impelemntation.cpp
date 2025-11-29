#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
class linkedList{
    Node* head;
    Node* tail;
public:                     
    linkedList(){
        head = tail = NULL;
    }
    void pushFront(int value){
        Node* newNode = new Node(value);
            if (head == NULL){
                head = tail = newNode;
                return ;
            }else{
                newNode->next = head;
                head = newNode;
            }
    } 
    void pushBack(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        } 
    }
    void popFront(){
        if(head == NULL){
            cout << "Linked List is Empty.." << endl;
            return;
        }else{
            Node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
        }
    }
    void PopBack(){
        if(head == NULL){
            cout << "Linked List is Empty.." << endl;
            return;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp -> next = NULL;
            delete tail;
            tail = temp;
        }
    }
    void insertElement(int value, int pos){
        if(pos < 0){
            cout  << "Invalid Position.";
            return;
        }
        if(pos == 0){
            pushFront(value);
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout << "Invalid POsition\n";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode; 
    }
    void searchElement(int pos){
        if(pos < 0){
            cout << "Invalid position\n";
            return;
        }else if (pos == 0){
            cout << "Elemnts is: ";
            cout << head->data;
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos; i++){
            if(temp == NULL){
                cout << "Position out of range\n";
                return;
            }
            temp = temp->next;
        }
        cout << temp->data;
    }
    void printLinkedList(){
        Node* temp = head;
        while(temp !=  NULL){
            cout<<temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
                       
};
int main() {
    linkedList LL;
    LL.pushFront(3);
    LL.pushFront(2);
    LL.pushFront(1); 
    LL.pushBack(4);
    // LL.popFront();
    // LL.PopBack();
    LL.insertElement(5,4);
    LL.searchElement(2);
    // LL.printLinkedList();
    return 0; 
}