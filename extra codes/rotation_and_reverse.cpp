/*
WAP to shift elements 
input =  1 2 3 4 5 6 
output = 5 6 3 4 1 2
for odd and even numbers... 
know what is hashtable 
*/
#include <iostream>
using namespace std;

int main() {
    int n = 6;  
    int arr[n] = {1, 2, 3, 4, 5, 6};

    int k = 2; // number of elements to swap from front and back

    int result[n];
    int idx = 0;

    // Step 1: copy last k elements
    for (int i = n - k; i < n; i++) {
        result[idx++] = arr[i];
    }

    // Step 2: copy middle part
    for (int i = k; i < n - k; i++) {
        result[idx++] = arr[i];
    }

    // Step 3: copy first k elements
    for (int i = 0; i < k; i++) {
        result[idx++] = arr[i];
    }

    // Print result
    cout << "Output: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
