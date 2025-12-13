#include <iostream>
using namespace std;
struct book {
    int pages;
    int price;
    book(int pages, int price){
        this -> pages =pages ;
        this -> price = price;
    }
    void books(){
        cout << "Struct: "<<pages << " " << price << endl;
    }
};

class pen{
    public:
        string color;
        int cost;
    pen(string color, int cost){
        this -> color = color;
        this -> cost = cost;
    }
    void pens(){
        cout <<"Class: " << color << " " << cost <<endl; 
    }
};
int main() {
    pen p("Black",10);
    p.pens();

    book b(200,500);
    b.books();


    return 0;
}