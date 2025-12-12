#include <iostream>
using namespace std;
void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void maxHeapify(int arr[], int n, int i){
    int larger = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] > arr[larger])
        larger = left;
    if(right < n && arr[right] > arr[larger])
        larger = right;

    if(larger != i){
        swap(arr[larger], arr[i]);
        maxHeapify(arr,n,larger);
    }
}
void minheapify(int arr[], int n, int i){
    int smaller = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left < n && arr[left] < arr[smaller])
        smaller = left;
    if(right < n && arr[right] < arr[smaller])
        smaller = right;

    if(smaller != i){
        swap(arr[i], arr[smaller]);
        minheapify(arr,n,smaller);
    }
}
void buildMaxheap(int arr[], int n){
    for(int i = n/2 - 1; i>= 0; i--){
        maxHeapify(arr, n ,i);
    }
}
void buildminheap(int arr[], int n){
    for(int i = n/2 - 1; i >= 0; i--){
        minheapify(arr, i ,n);
    }
}
void heapsort(int arr[], int size){
    for(int i=size/2 - 1; i >= 0; i--)maxHeapify(arr, size, i);
    for(int i=size-1; i>0; i--){
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}
int main() {

    return 0;
}