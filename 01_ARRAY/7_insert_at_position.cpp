#include <iostream>
using namespace std;

int main() {
    int arr[100], n, element, pos;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter element: ";
    cin >> element;

    // shift elements right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = element; // place element
    n++;

    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
/*
Enter size of array: 5
Enter 5 elements: 10 20 30 40 50
Enter position to insert (0 to 5): 2
Enter element: 99
*/