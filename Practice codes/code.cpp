#include <iostream>
using namespace std;
#define MAX_SIZE 100

class queue
{
public:
    int front;
    int rear;
    int arr[MAX_SIZE];
    queue()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(int value)
    {
        if (rear == MAX_SIZE - 1)
        {
            cout << "OverFlow..";
            return;
        }
        if (front = -1 && rear == -1)
        {
            front = 0;
        }
        arr[++rear] = value;
    }
    int dequeue()
    {
        if (front == rear == -1 || front > rear)
        {
            cout << "Queue is Underflow..";
            return -1;
        }
        else
        {
            front++;
        }
    }
    int display()
    {
        for (int i = front; i < rear + 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int getfront()
    {
        cout << arr[front] << endl;
    }
    int getrear()
    {
        cout << arr[rear] << endl;
    }
};

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    q.dequeue();
    q.display();
    q.getfront();
    q.getrear();
    return 0;
}