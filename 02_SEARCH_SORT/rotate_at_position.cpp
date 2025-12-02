#include <iostream>
using namespace std;
void rotateLeft(int arr[], int n, int d) {
    d = d % n; 
    int temp[d];
    for (int i = 0; i < d; i++) {temp[i] = arr[i];
    }for (int i = d; i < n; i++) {arr[i - d] = arr[i];
    }for (int i = 0; i < d; i++) {arr[n - d + i] = temp[i];}
}
int main() {
    int n, d;
    cout << "Enter size of array: ";cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter rotation count: ";cin >> d;

    rotateLeft(arr, n, d);
    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
