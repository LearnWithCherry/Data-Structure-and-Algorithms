#include <bits/stdc++.h>
using namespace std;
void printName(){
    cout << "Function to calc the >>>>>>>>.";
}
int calc(int a, int b){
    return a+b;
}
int min_max(int num1, int num2){
    if(num1 >= num2) return num1;
    else return num2;

}
int main(){
    printName();
    int result = calc(5,5);
    cout << result;
    int num1,num2;
    cin >> num1 >> num2;
    int mini = min_max(num1, num2);
    cout << mini;
    return 0;
}