#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) : name(n), marks(m) {}

    void save() {
        ofstream fout("data.txt", ios::out);
        fout << name << " " << marks;
        fout.close();
    }

    ~Student() {
        cout << "Object destroyed\n";   // destructor
    }
};

int main() {
    Student s("Cherry", 95);
    s.save();
}
