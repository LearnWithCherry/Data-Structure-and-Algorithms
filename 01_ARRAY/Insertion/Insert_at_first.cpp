#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // capacity 10
    int size = 5; // current elements

    cout << "Array before insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int newElement;
    cout << "Enter element to insert: ";
    cin >> newElement;

    for(int i=size; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = newElement;
    size ++ ;
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
