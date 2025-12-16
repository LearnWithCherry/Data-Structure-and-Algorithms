#include <iostream>
using namespace std;

class Box {
public:
    int value;
    Box(int v = 0) : value(v) {}

    Box operator+(Box b) {            // operator overloading
        return Box(value + b.value);
    }
};

class Shape {
public:
    virtual void area() { cout << "Shape\n"; }
};

class Square : public Shape {
public:
    int side;
    Square(int s) : side(s) {}

    void area() override {            // overriding
        cout << "Area = " << side * side << endl;
    }
};

int main() {
    Box b1(5), b2(10);
    Box b3 = b1 + b2;
    cout << b3.value << endl;

    Shape *s = new Square(4);
    s->area();
    delete s;
}
