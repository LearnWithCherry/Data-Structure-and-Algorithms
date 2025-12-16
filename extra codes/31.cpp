#include <iostream>
using namespace std;
class counting{
    public:
        string name;
        static int data;

    counting(string name){
        this -> name;
        data ++;
    }
    static void show(){
        cout << "Total: " << data << endl;
    }
};

int counting :: data = 0;

int main() {  
    counting c1("Rajat. ");
    counting c2("aanum. ");
    counting c3("isha. ");
    counting c4("isha. ");
    counting c5("isha. ");
    counting c6("isha. ");
    counting :: show();
    return 0;
}