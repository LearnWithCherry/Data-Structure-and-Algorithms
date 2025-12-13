#include <iostream>    
using namespace std;
class Employee{
    public: 
        string name;
        int  ID;
     
    Employee(string name, int ID){
        this -> name = name;
        this -> ID = ID;
    }
    virtual void display(){
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
    }
};
class fulltime : public Employee{
    public:
        int salary;

    fulltime(string name, int ID, int salary) : Employee(name,ID){
        this -> salary = salary;
    }
    void display() override{
        Employee :: display();
            cout << "Salary of full time Employee: " << salary << endl; 
    }
};
class partime : public Employee{
    public:
        int hour;
        int payperhour;

    partime(string name, int ID, int hour, int payperhour) : Employee(name,ID){
        this -> hour = hour;
        this -> payperhour = payperhour;
    }
    void display() override{
        Employee :: display();
            cout << "Salary per hour: " << hour * payperhour << endl;
    }
};
int main() {
    string name;
    int ID, salary,hour,payperhour;
    cin >> name >>ID >> salary;
    fulltime ft(name,ID, salary);
    ft.display();   
    cin >> name >>ID >> hour>>payperhour; 
    partime pt(name,ID,hour,payperhour);
    pt.display();
    return 0;
}
