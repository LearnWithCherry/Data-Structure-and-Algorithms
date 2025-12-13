#include <iostream>
using namespace std;
class phone{
    public:
        int battert;

    phone(int data){
        cout << "device ON" << endl;
    }

    ~phone(){
        cout << "device OFF" << endl;
    }
};
int main() {
    phone t(10);

    return 0;
}