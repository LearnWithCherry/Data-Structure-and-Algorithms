#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int i = 1;
    for(int i=1; i<=x; i++){
        cout << i << " ";
    }
    cout << endl;
    while(x >= i){
        cout << i << " ";
        i++;
    }
    return 0;
}