#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    if(a % 2 == 0){
        cout << "Even";
    }else if(a % 2 != 0){
        cout << "Odd";
    }else{
        cout << "Error"; 
    }
    return 0;
}