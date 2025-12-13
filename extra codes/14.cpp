#include <iostream>
using namespace std;
#include<fstream>
int main() {
    fstream file;
    file.open("R:\\VScode\\ETP\\Problems\\00.txt", ios::in | ios::out | ios::trunc);
    file << "Hello from Rajat. ";
    // file.close();    
    file.seekp(0);
    
    string line;
    while(getline(file,line)){
        cout << line << " ";
    }
    file.close();
    return 0;
}