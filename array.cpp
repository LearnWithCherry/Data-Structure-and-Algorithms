#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Size: "; cin >> size;
    int arr[size];
    cout << "Elements: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    // insert at end;
    int value;
    cout << "value: ";cin >> value;
    arr[size] = value;
    size ++;
    cout << "Elements: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    // insert in index
    int value, index;
    cout << "Value: ";cin >> value;
    cout << "index: ";cin >> index;
    size++;
    for(int i=size; i>index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;

    // insert at beg
    int value;
    cout << "value: "; cin >> value;
    size ++;
    for(int i=size; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    // delete last ele
    int temp = arr[size];
    size--;

    // delete first ele
    for(int i=0; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    size--;

    // delete by index
    int index = 2;
    for(int i=index; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    size--;

    // searching 
    int key;
    bool found = false;
    cout << "key: "; cin >> key;
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            cout << "Found value: " << arr[i] << " At index "<< i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Elements not found";
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}