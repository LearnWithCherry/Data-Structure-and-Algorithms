#include <iostream>
using namespace std;

template <typename T>
class Temp {
private:
    T* arr;
    int n;

public:
    Temp(T a[], int size) {
        n = size;
        arr = new T[n];

        for (int i = 0; i < n; i++) {
            arr[i] = a[i];
        }
    }

    void print() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    
};

int main() {
    int a[] = {56, 87, 22, 9, 7};
    Temp<int> obj_arr(a, 5);
    obj_arr.print();
}