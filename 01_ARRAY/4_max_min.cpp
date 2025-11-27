#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int maxVal = arr[0], minVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }

    cout << "Maximum = " << maxVal << endl;
    cout << "Minimum = " << minVal << endl;
}
/*
Enter size of array: 6
Enter 6 elements: 11 45 32 67 4 88
*/