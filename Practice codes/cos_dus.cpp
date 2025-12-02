#include <iostream>
using namespace std;
class Hello{
    public:
        Hello(){
            cout << "Constructor called.\n";
        }
        ~Hello(){
            cout << "destructor called.\n";
        }
};
int main() {
    Hello h;
    cout << "Inside Main function.\n";
    return 0;
}