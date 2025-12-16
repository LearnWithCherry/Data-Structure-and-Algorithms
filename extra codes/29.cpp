#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() { cout << "General work\n"; }
    virtual ~Employee() { cout << "Base destroyed\n"; }   // virtual destructor
};

class Developer : public Employee {
public:
    void work() override { cout << "Writes code\n"; }
    ~Developer() { cout << "Dev destroyed\n"; }
};

int main() {
    Employee *e = new Developer();    // Base pointer → Derived object
    e->work();
    delete e;                         // calls both destructors
}
