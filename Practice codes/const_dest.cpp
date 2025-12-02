#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default Constructor
    Student() {
        cout << "Default constructor called.\n";
        name = "Unknown";
        age = 0;
    }

    // Parameterized Constructor
    Student(string n, int a) {
        cout << "Parameterized constructor called.\n";
        name = n;
        age = a;
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1; // Default constructor
    s1.display();

    cout << endl;
    Student s2("Cherry", 20); // Parameterized constructor
    s2.display();

    cout << "\nExiting main...\n";
    return 0;
}
