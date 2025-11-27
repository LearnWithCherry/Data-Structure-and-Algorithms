#include <iostream>
using namespace std;

int main() {
    int arr[100],n;

    cout << "Enter the Size of Array: ";
    cin >> n;

    cout << "Enter "<< n << " Elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Total Array elements are: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
/*
Enter size of array: 5
Enter 5 elements: 10 20 30 40 50
*/