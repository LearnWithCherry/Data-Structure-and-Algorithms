#include <iostream>
using namespace std;

void update(int &ref) {      // reference variable
    ref += 10;
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];   // dynamic array using pointer

    for (int i = 0; i < n; i++)
        cin >> *(arr + i);   // pointer arithmetic input

    int maxVal = *arr;
    for (int i = 1; i < n; i++)
        if (*(arr + i) > maxVal)
            maxVal = *(arr + i);

    update(maxVal);          // reference used
    cout << "Updated Max: " << maxVal << endl;

    delete[] arr;
}
