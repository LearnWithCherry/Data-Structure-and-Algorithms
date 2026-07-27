#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1D array
    int n = 10;
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } 
    // 2D array
    int arr2d[3][5];
    arr2d[1][3] = 45;
    cout << arr2d[1][3];
    delete[] arr; 
    
    return 0;
}