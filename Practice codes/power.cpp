#include <iostream>
using namespace std;

long long power(int a, int b) {
    if (b == 0)
        return 1;
    long long half = power(a, b / 2);
    long long result = half * half;
    if (b % 2 != 0)
        result *= a;
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << power(a, b) << endl;
    }
    return 0;
}