#include <iostream>
using namespace std;
class test{
    public: 
        test(){cout << "Constructor.";}
        ~test(){cout << "Destructor.";}
};
int main() {
test t;
    

    return 0;
}