#include <iostream>
using namespace std;
class base{
    public:
    int* baseptr;
        base(){
            baseptr =  new int;
            cout << "Base Constructor called.\n";
        }
        virtual ~base(){
            delete baseptr;
            cout << "Base Destructor called.\n";
        }
};
class derived : public base{
    public:
    int *ptr;
        derived(){
            ptr = new int;
            cout << "Derived Constructor called.\n";
        }   
        ~derived()/*override*/{
            delete ptr;
            cout << "Derived Destructor called.\n";
        }
};
int main() {
    base *baseptr = new derived;    
    delete baseptr;
    return 0;
}
