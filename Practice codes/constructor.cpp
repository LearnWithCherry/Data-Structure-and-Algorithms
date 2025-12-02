#include <iostream>
using namespace std;

class X{
public:
    X(){ cout << "X"; }
};

class Y : public X{
public:
    Y(){ cout << "Y"; }
};

int main(){
    Y obj;
}
