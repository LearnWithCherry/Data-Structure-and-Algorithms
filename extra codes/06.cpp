#include <iostream>
using namespace std;

// Function with default argument
float bill(float price, float tax = 0.18) {
    return price + (price * tax);
}

int main() {
    cout << bill(1000) << endl;        // uses default 18% tax
    cout << bill(1000, 0.25) << endl;  // uses given 25% tax
    return 0;
}
