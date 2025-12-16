#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    try{
        if(n <= 0){
            throw ("Insert value more then Zero");
        }else if(n >= 10){
            throw ("Insert value less then 10");
        }else{
            cout << n * n << endl;
        }
    }catch(const char* mes){
        cout << mes << endl;
    }

    return 0;
}