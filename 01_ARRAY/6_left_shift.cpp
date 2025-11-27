#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int temp = arr[0]; // store first element
    for(int i = 0; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp; // place first element at last

    cout << "Array after left shift: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
/*
Enter size of array: 5
Enter 5 elements: 1 2 3 4 5
*/