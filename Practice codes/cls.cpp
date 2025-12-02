
#include <iostream>
using namespace std;

class person{
    public: 
        string name;
        int age;

    person(string name, int age){
        this->name = name;
        this->age = age;
    }
};
class employee : public person{
    public:
        string address;
        long long salary;

    employee(string name, int age, string address, long long salary) :  person(name,age){
        this->address = address;
        this->salary = salary;
    }

    void display(){
        cout << "Name: " << name
        <<"\nAge: " << age
        <<"\nAddress: "<< address
        <<"\nSalary: " << salary;
    }
};                                                                                             
int main(){
    employee e("Rajat",200,"Mars",12000000000);
    e.display();
    return 0;
}