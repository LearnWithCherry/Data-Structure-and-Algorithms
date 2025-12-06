#include <iostream>
using namespace std;

// pass by value
int fun1 (int x){
    return 10;
}

// pass by reference
int fun2(int &y){
    return 20;
}

// pass by pointer
int fun3 (int *z){
    *z = 30;
    return *z;
}

int main(){
    int x = 5, y = 6, z = 7;
    cout << fun1(x) << endl;   // prints 10
    cout << fun2(y) << endl;   // prints 20
    cout << fun3(&z) << endl;  // prints 30, z becomes 30
    return 0;
}
