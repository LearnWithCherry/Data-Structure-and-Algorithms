#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 50;
    cout << "Value: " << *p << endl;
    delete p;
    cout << "Value: " << *p << endl;
    return 0;
}