#include <bits/stdc++.h>
using namespace std;

int main() {
    // MAX HEAP
    priority_queue<int> maxH;

    maxH.push(40);
    maxH.push(10);
    maxH.push(50);
    maxH.push(20);

    cout << "Max-Heap top: " << maxH.top() << endl;

    maxH.pop();
    cout << "After pop (Max-Heap): " << maxH.top() << endl;

    cout << "Max-Heap elements: ";
    while(!maxH.empty()){
        cout << maxH.top() << " ";
        maxH.pop();
    }
    cout << endl << endl;

    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> minH;

    minH.push(40);
    minH.push(10);
    minH.push(5);
    minH.push(25);

    cout << "Min-Heap top: " << minH.top() << endl;

    minH.pop();
    cout << "After pop (Min-Heap): " << minH.top() << endl;

    cout << "Min-Heap elements: ";
    while(!minH.empty()){
        cout << minH.top() << " ";
        minH.pop();
    }

    return 0;
}
