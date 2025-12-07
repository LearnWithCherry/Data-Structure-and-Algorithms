#include<iostream>
using namespace std;

void swap(int *a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
};
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i]<< " ";
    }
    cout << "\n";
};
void selectionsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min = i ;
        for(int j=i+1;j<n;j++){
            if (a[j]< a [min])
                min = j;
        }
        swap(&a[min],&a[i]);
    }
}
int main(){
    int data[] = {20,12,10,5,3,7,1};
    int size = sizeof(data)/sizeof(data[0]);
    selectionsort(data, size);
    cout << "Sorted Array in Acsending Order:\n";
    printArr(data, size);

    return 0;
}