// do Leet code 876 problen
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
        void pushback(int value ){
            Node* newNode = new Node(value);
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                tail -> next = newNode;
                tail = newNode;
            }
        }
        void Middle(){
            Node* slow = head;
            Node* fast = head;
                while(fast != NULL && fast -> next != NULL){
                    fast = fast -> next -> next;
                    slow  = slow -> next;
                }
                cout << slow->data;
        }
        void printList(){
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
    ll.pushback(10);
    ll.pushback(20);
    ll.pushback(30);
    ll.pushback(40);
    ll.pushback(50);
    ll.printList();
    ll.Middle();
    return 0;
}