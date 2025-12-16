#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;   // pure virtual → abstract class
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog Barks\n";
    }
};

int main() {
    Animal *a = new Dog();
    a->sound();

    delete a;
}
