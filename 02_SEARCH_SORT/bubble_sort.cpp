#include <iostream>
using namespace std;

void bubbleSearch(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){   // minor fix: reduce iterations
            if(arr[j] > arr[j+1])   // removed the extra semicolon
                swap(arr[j],arr[j+1]);
        }
    }
}

void printArr(int arr[],int n ){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,5,9,8,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);   // initialize n properly
    bubbleSearch(arr,n);
    printArr(arr,n);
    return 0;
}
