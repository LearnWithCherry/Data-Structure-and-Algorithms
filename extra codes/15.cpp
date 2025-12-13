#include <iostream>
#include<fstream>
using namespace std;

int main() {
    string name;
    int ID, salary;
    cin >> name >> ID >> salary;
    fstream file;
    file.open("R:\\VScode\\ETP\\Problems\\00.txt", ios::in | ios::out | ios::trunc);
    file << name << " "<< ID << " "<< salary;
    file.seekg(0);
    string line;
    while(getline(file,line)){
        cout << line <<" ";
    }
    file.close();
    return 0;
}