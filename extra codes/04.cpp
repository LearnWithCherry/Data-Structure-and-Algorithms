#include <iostream>
using namespace std;
class calc{
    public:
    int div(int a, int b);
    inline int mul(int c, int d){
        return c * d;
    }
};
int calc :: div(int a, int b){
    return a / b;
}
int main() {
    calc c;
    cout << c.div(10,10)<< endl;
    cout << c.mul(10,10)<< endl;
    return 0;
}