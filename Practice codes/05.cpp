#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    double data1, data2, data3;

    cin >> data1 >> data2 >> data3;
    
    cout << fixed << setprecision(1) << data1 << endl;
    cout << fixed << setprecision(2) << data2 << endl;
    cout << fixed << setprecision(3) << data3 << endl;

    return 0;
}