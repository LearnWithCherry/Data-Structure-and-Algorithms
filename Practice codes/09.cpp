#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int roll;
        int marks1;
        int marks2;
        int marks3;

    student(string name,int roll,int marks1,int marks2,int marks3){
        this -> name= name;
        this ->roll =roll ;
        this -> marks1= marks1;
        this -> marks2= marks2;
        this -> marks3= marks3;
    }

    void total(){
        int total = marks1 + marks2 + marks3;
        cout << "name: " << name << "\nRollNo: " << roll <<"\nTotal: " << total << endl;   
    }
};
int main() {
    string name;
    int roll, marks1, marks2, marks3;
    cin >> name >>roll >>  marks1 >>  marks2 >>  marks3;
    student s(name, roll, marks1, marks2, marks3);

    s.total();
  return 0;
}