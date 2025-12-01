#include <iostream>
using namespace std;
class Car{
    public:
        string color;
        int tyre;
        string type;
        int topSpeed;
    
    Car(string color, int tyre,string type,int topSpeed){
        this->color = color;
        this->topSpeed = topSpeed;
        this->type = type;
        this->tyre = tyre;
    }
    virtual void display(){
        cout 
        << "Car type: " << type
        <<"\nTop speed: " << topSpeed
        <<"\nColor of the car is: " << color
        << "\nTotal tyre: " << tyre;
    }
};
class Engine : public Car{
    public:
        int tankCapacity;
        int EngineSize;
        int Gear;
    Engine(string color, int tyre,string type,int topSpeed,int tankCapacity,int EngineSize,int Gear) : Car(color,tyre,type,topSpeed){
        this -> tankCapacity  = tankCapacity;
        this -> EngineSize  = EngineSize;
        this -> Gear  = Gear;
    }
    void display()override{ Car::display();
        cout 
        <<"\nTank capacity is: " << tankCapacity
        <<"\nEngine size is: " << EngineSize
        <<"\nTotal Gear: " << Gear<<endl;
    }
};
class Electric : public Car{
    public:
        int BatteryCapacity;
        int range;
    Electric(string color, int tyre,string type,int topSpeed, int BatteryCapacity, int range) : Car (color,tyre,type,topSpeed){
        this -> BatteryCapacity = BatteryCapacity;
        this -> range = range;
    }
    void display()override{ Car::display();
        cout 
        << "\nBatteryCapacity: " << BatteryCapacity << " WH"
        << "\nRange: " << range; 
    }
};
int main() {
    cout << "\nPetrol Type: \n";
    Engine EN("Black",4,"petrol",300,40,3500,7);
    EN.display();
    cout << "\nElectric Type: \n";
    Electric EL("Black",4,"Electric",100,450,350);
    EL.display();
    return 0;
}