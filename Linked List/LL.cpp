#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};
class Doubly
{
 public:
 Node *head;
 Doubly()
 {
     head=nullptr;
 }

 void insert_last(Node* &head, int val)
 {
   Node* newnode= new Node(val);
   if(head==nullptr)
   {
       head=newnode;
       return;
      
   }
   Node *temp=head;
   while(temp->next!=nullptr)
   {
      temp=temp->next;
       
   }
      temp->next=newnode;
      newnode->prev=temp;
     
   
 }
 void delete_node(Node* &head, int val)
 {

 Node* temp=head;
 while(temp->next!=nullptr)
 {
     
 if(temp->data==val)
     {
         temp->prev->next=temp->next;
         temp->next->prev=temp->prev;
     }
     temp=temp->next;
 }
}
void printlist(Node* &head)
{
     Node* temp=head;
     while(temp!=nullptr)
     {
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<endl;
}
};
int main()
{
    Doubly d1;
    d1.insert_last(d1.head,10);
    d1.insert_last(d1.head,20);
    d1.insert_last(d1.head,30);
    d1.insert_last(d1.head,40);
    d1.insert_last(d1.head,50);
    d1.delete_node(d1.head,20);
    d1.printlist(d1.head);
}