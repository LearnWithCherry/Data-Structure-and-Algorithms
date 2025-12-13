#include <iostream>
using namespace std;

int main() {
    int x = 20;
    float y = 5.75;

    void* ptr;

    ptr = &x;
    cout << *(int*)ptr << endl;

    ptr = &y;
    cout << *(float*)ptr << endl;

    return 0;
}
