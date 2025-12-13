#include <iostream>
using namespace std;
class counter{
    public:
        int value;
    counter(int value){
        this -> value = value;
    }
    counter operator ++(){
        value ++;
        return * this;
    }
    void show(){
        cout << value << endl;
    }
};
int main() {
    int n;
    cin >> n;
    counter c(n);  
    ++c;
    c.show();
    return 0;
}