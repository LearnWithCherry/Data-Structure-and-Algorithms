#include <iostream>
using namespace std;

int main() {

    int  a = 5;
    int *p = &a;
    int **q = &p;
    cout << *p << "\n" 
         << **q << "\n" 
         << p << "\n"
         << *q << endl;
    return 0;
}
/*

a   = 5
p   = address of a
q   = address of p

*p   = value of a  (5)
**q  = value of a  (5)
p    = address of a
*q   = address of a

*/