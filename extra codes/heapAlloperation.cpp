#include <iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left <= n && a[left] > a[largest])
        largest = left;

    if(right <= n && a[right] > a[largest])
        largest = right;

    if(largest != i){
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void buildHeap(int a[], int n){
    for(int i = n/2; i >= 1; i--)
        heapify(a, n, i);
}

void deleteRoot(int a[], int &n){
    a[1] = a[n];
    n--;
    heapify(a, n, 1);
}
