#include <iostream>
using namespace std;
class Marks{
    public:
        int n;
        int * arr;
        int total;

    Marks(int n){
        this -> n = n;
        arr = new int[n];
        total = 0;
    }
    void setvalue(){
        for(int i=0; i<n; i++){
            cin >> arr[i];
            total += arr[i];
        }
        cout << "Total: " << total << endl;
    }
    ~Marks(){delete [] arr;}
};
int main() {
    int n;
    cin >> n;

    Marks m(n);
    m.setvalue();
    return 0;
}