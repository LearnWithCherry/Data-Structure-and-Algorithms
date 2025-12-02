#include <iostream>
using namespace std;
template < typename T>

class Box{
    public:
        T x;
        Box(T a) : x (a) {}
        T getx(){
            return x;
        }
};
int main() {
    Box <int> b1(1);
    cout << b1.getx() << endl;
    Box <double> b2(23.45);
    cout << b2.getx() << endl;
    Box <char> b3('A');
    cout << b3.getx() << endl;
    return 0;
}