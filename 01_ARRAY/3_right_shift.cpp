#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int temp = arr[n-1]; // store last element
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp; // place last element at first

    cout << "Array after right shift: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
/*
Enter size of array: 5
Enter 5 elements: 1 2 3 4 5
*/