#include <iostream>
using namespace std;

int q[100], frontt = -1, rear = -1;

void enqueue(int x){
    if(rear == 99) return;

    if(frontt == -1) frontt = 0;
    rear++;
    q[rear] = x;
}

int dequeue(){
    if(frontt == -1 || frontt > rear) return -1;

    return q[frontt++];
}

int front(){
    if(frontt == -1 || frontt > rear) return -1;
    return q[frontt];
}
