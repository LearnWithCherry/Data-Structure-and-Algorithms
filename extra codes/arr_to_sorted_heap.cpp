#include <iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int larger = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left < n && a[left] > a[larger]){
        larger = left;
    }
    if(right < n && a[right] > a[larger]){
        larger = right;
    }
    if(!larger != i){
        swap(a[i], a[larger]);
        heapify(a,n,larger);
    }

}
void buildHeap(int a[], int n){
    for(int i = n/2; i >= 1; i++){
        heapify(a,n,i);
    }
}

int main(){
    int a[10] = {0, 3, 5, 1, 10, 4, 2}; 
    int n = 6;

    buildHeap(a, n);

    for(int i=1; i<=n; i++){
        cout << a[i] << " ";
    }
}
