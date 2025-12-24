#include <iostream>
using namespace std;

// Recursive function to compute gcd
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Recursive function to compute lcm of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Recursive function to compute lcm of three numbers
int find_lcm(int a, int b, int c) {
    return lcm(lcm(a, b), c);
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << find_lcm(n1, n2, n3) << endl;
    return 0;
}