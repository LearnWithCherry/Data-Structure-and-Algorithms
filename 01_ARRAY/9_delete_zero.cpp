#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n;
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int newsize = 0;
   

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[newsize] = arr[i];
            newsize++;
        }
    }

    
    for (int i = 0; i < newsize; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}