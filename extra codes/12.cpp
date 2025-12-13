#include <iostream>
using namespace std;
class test{
    public:
        int data;

    test(int data){
        this -> data = data;
    }
    void display(){
        cout << "Data: " << data << endl;
    }
};
int main() {
    test t(10);
    t.display();

    return 0;
}