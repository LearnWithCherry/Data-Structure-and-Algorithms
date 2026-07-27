#include <bits/stdc++.h>
using namespace std;
// pass by value - passing the value not the actual address of the value 
void byValue(int num1){
    cout << num1 << endl;
    num1 += 10;
    cout << num1 << endl;
    num1 += 10;
    cout << num1 << endl;
}

// pass by reference - passing actual address of the value using "&"
void byReference(int &num2){
    cout << num2 << endl;
    num2 += 10;
    cout << num2 << endl;
    num2 += 10;
    cout << num2 << endl;
}
int main(){ 
    int num1 = 10;
    byValue(num1);
    cout << "Pass by value: "<< num1 << endl;
    int num2 = 10;
    byReference(num2);
    cout << "Pass by reference: "<< num2 << endl;
    return 0;
}