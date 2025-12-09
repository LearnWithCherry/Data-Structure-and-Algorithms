#include <iostream>
using namespace std;
class Test{
    public:
    void print(){
        cout << "Testing.." << endl;
    }
};
template <typename T>
class Box{
    public:
        T x;
        Box(T a): x (a){}
        T getx(){
            return x;
        }
};
int main() {

    Box <int> b1(10);
    cout << b1.getx() << endl;
    Box <double> b2(10.2);
    cout << b2.getx() << endl;
    Box <char> b3('X');
    cout << b3.getx() << endl;

    Test t;
    Box <Test> b4(t);
    b4.x.print();

    return 0;
}