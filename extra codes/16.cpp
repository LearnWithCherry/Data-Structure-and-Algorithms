#include <iostream>
#include<fstream>
using namespace std;
class employee{
    public:
        string name;
        int ID, salary;

    employee(string name, int ID, int salary){
        this -> name     =   name;
        this -> ID       =   ID;
        this -> salary   =   salary;
    }
    ~employee(){
        cout << "\nData saved." << endl;
    }
};

int main() {   
    string name;
    int ID, salary;
    cin >> name >> ID >> salary;
    employee e(name,ID,salary);
    fstream file;
    file.open("R:\\VScode\\ETP\\Problems\\00.txt", ios::in | ios::out | ios::trunc);
    file << name << " " << ID << " " << salary;
    string line;
    file.seekp(0);
    while(getline(file, line)){
        cout << line;
    }
    file.close();
} 
