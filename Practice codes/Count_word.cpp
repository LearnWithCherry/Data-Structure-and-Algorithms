#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    fstream file;
    file.open("Data.txt", ios::in | ios::out | ios::trunc);
    file << "Hello\nHow are you\nI am Learning CPP.";
    file.seekg(0);
    int count = 0;
    string line;
    while(getline(file,line)){
        stringstream ss (line);
        string word;
        while(ss >> word){
            count ++;
        }
    }
    cout << count << endl;
    file.close();
}