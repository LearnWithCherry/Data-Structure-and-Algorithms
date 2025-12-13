#include <iostream>
using namespace std;
void CBV(int n){
    n = 100;
}
void CVR(int &n){
    n = 100;
}
void CVA(int *n){
    *n = 100;
}
int main() {
    int n = 10;
  
    CBV(n);
    cout << n<< endl;
    CVR(n);
    cout << n<< endl;
    CVA(&n);
    cout << n<< endl;

    return 0;
}