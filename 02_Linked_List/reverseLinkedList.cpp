// revrse linked list leetcode - 206
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
class LinkedList{
    Node* head;
    Node* tail;
    public:
        LinkedList(){
            head = tail = NULL;
        }
    void pushBack(int value){            
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    void reverseLinkedList(){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        if(head == NULL){
            cout << "Linked List is Empty\n";   
                return;
        }else{
            while(curr != NULL){
                next = curr -> next;  // saves the address of next node before changing any pointer
                curr ->next = prev; // reverse the link by making the curr next pointer pointing to the prev instead of the curr next 

                prev = curr; // move prev pointer one step forward to the currect node
                curr = next; // current pointer to the next node in the original list that you save earlier.
            }
        }
        head = prev; // put the value of prev into head;
    }
    void printLinkedList(){
            Node* temp = head;
            if(head == NULL){
                cout << "Linked List is Empty\n";
                return;
            }else{
                while(temp != NULL){
                    cout << temp->data << " -> ";
                    temp = temp -> next; 
                }
                cout << "NULL\n";
            }
        }
};
int main() {
    LinkedList ll;
    ll.pushBack(1);
    ll.pushBack(2);
    ll.pushBack(3);
    ll.pushBack(4);
    ll.pushBack(5);
    cout << "Normal Linked List.\n";
    ll.printLinkedList();
    cout << "Reversed Linked List.\n";
    ll.reverseLinkedList();
    ll.printLinkedList();
    return 0;
}