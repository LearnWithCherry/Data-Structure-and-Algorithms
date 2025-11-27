#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter position to delete (0 to " << n-1 << "): ";
    cin >> pos;

    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    cout << "Array after deletion: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
/*
Enter size of array: 5
Enter 5 elements: 10 20 30 40 50
Enter position to delete (0 to 4): 1
*/