#include <iostream>
using namespace std;
class student{
    public:
        int age;
        string name;

    student(string name, int age){
        this -> name = name;
        this -> age = age;
    }
    void display(){
        cout << "Name: " << name
             <<"\nAge: "  << age;
    }
};
int main() {
    student s("Rajat",10);
    s.display();

    return 0;
}