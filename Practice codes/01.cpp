#include <iostream>
using namespace std;
class mobile{
    public:
        string brand;
        int price;

    mobile(string brand, int price){
        this -> brand = brand;
        this -> price = price;
    }
    void show(){
        cout << brand << " " << price << endl;
    }
};
int main() {
    int price;
    string brand;
    cin >> price >> brand;
    mobile m(brand , price);
    m.show();
    return 0;
}