#include<iostream>
using namespace std;
int main(){
    int arrsize;
    cout << "Enter Array Size: ";
    cin  >> arrsize;
 
    int arrelements[arrsize];
    cout << "Enter array elements: ";
    for(int i=0;i<arrsize-1;i++){
        cin >> arrelements[i];
    }
    for (int i=0;i<arrsize;i++){
        cout << arrelements[i] << " ";
    }
    return 0;
}