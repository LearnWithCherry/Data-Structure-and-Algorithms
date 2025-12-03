#include <iostream>
using namespace std;
// address wali value dega naaki address 
/*
"&" this will provide memory address of a variable

"*" gives the value stored at the address */
int main() {
    int a = 10;
    int* ptr = &a;
    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    return 0;
}