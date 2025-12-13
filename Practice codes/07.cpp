#include <iostream>
using namespace std;
inline int max (int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
    
}
int main() {
    cout << max(10,2) << endl;
    cout << max(10,20) << endl;
    return 0;
}