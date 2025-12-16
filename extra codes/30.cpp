#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <class T>          // function template
T maxi(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    try {
        vector<int> v = {5, 1, 4, 2};
        sort(v.begin(), v.end());     // STL algorithm

        for (int x : v) cout << x << " ";
        cout << "\nMax = " << maxi(10, 20) << endl;

        throw 101;                    // exception thrown
    }
    catch (int e) {
        cout << "Exception caught: " << e << endl;
    }
}
