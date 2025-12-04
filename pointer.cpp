#include <iostream>
using namespace std;

int main() {    
    int a = 10;
    int* pointer = &a;
    cout << pointer << "\n" << &a << "\n" << &pointer;
    return 0;
}