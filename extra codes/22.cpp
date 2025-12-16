#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {         // virtual = runtime polymorphism
        cout << "General Shape\n";
    }
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Circle Area: 3.14 * r * r\n";
    }
};

class Square : public Shape {
public:
    void area() override {
        cout << "Square Area: side * side\n";
    }
};

int main() {
    Shape *ptr;

    ptr = new Circle();
    ptr->area();       // Calls Circle::area

    ptr = new Square();
    ptr->area();       // Calls Square::area

    delete ptr;
}
