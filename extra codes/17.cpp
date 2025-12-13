#include <iostream>
using namespace std;
class Distance{
    public:
        int meter;  
    
    Distance (int meter){
        this -> meter = meter;
    }

    Distance operator+(Distance d){
        return Distance (meter + d.meter);
    }
    void show(){
        cout << meter << endl;
    }
};
int main() {
    int a,b;
    cin >> a >> b;
    Distance d1(a);
    Distance d2(b);
    
    Distance d3 = d1 + d2;
    d3.show();
    return 0;
}