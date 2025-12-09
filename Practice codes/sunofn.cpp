#include <iostream>
using namespace std;
int sum_of_N(int n){
    if( n == 1) return 1;
    return sum_of_N(n-1) + (n);
}
int main() {    

    int n = 10;
    cout << sum_of_N(n);
    return 0;
}