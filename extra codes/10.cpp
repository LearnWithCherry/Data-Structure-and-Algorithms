#include <iostream>
using namespace std;
class employee{
    public:
        string name;
        int ID;
        double base, bonus, deduction;

    employee(string name,int ID,double base,double bonus,double  deduction){
        this ->  name=name ;
        this ->  ID=ID ;
        this ->  base=base ;
        this ->  bonus=bonus ;
        this ->  deduction  = deduction;
    }
    int net;
    int calc(){
        return net = base + bonus - deduction;
    }
    void info(){
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Net salary: " << calc()  << endl;
    }
};
int main() {
    string name;
    int ID;
    double base, bonus, deduction;
    cin >>name >>ID>> base>> bonus >>deduction; 
    employee e(name, ID,base, bonus, deduction);
    e.info();
    return 0;
}