#include <iostream>
using namespace std;
void change(int &a){
    a = 10;
} // pass by reference (Will change value of inside a)
// void change(int a){
//     a = 10;
// } // pass by value (Will not change value of inside a)
int main() {    
    int a = 20;                                
    change(a);
    cout << a;
    return 0;
}