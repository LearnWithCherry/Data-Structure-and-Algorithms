#include <iostream>
using namespace std;
class graph{
    public:
        bool ** adjmtx; //ptr to ptr 
        int Numvtx; // store the number of vertices
    graph(int Numvtx){
        this -> Numvtx = Numvtx;
        adjmtx = new bool * [Numvtx];

    for(int i=0; i<Numvtx; i++){
        adjmtx[i] = new bool[Numvtx];
            for(int j=0; i<Numvtx; i++){
                adjmtx[i][j] = false;
            }
        }
    }
    
};
int main() {

    

    return 0;
}