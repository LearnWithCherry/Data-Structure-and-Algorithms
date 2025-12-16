#include <iostream>
using namespace std;

class Calculator {
    int a, b;

public:
    Calculator(int x, int y) : a(x), b(y) {}

    inline int add() { return a + b; }        // inline function
    int add(int x) { return a + b + x; }      // function overloading

    friend void showResult(Calculator c);     // friend function
};

void showResult(Calculator c) {               // can access private members
    cout << "Sum = " << c.add() << endl;
}

int main() {
    Calculator c(10, 20);
    showResult(c);
}
