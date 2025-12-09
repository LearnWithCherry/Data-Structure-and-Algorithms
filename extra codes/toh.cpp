#include <iostream>
using namespace std;
void Tower_of_honai(int disk, char start, char desti, char helper, int &count){
    if(disk == 1){
        cout << "Move disk " << disk << " from " << start << " to " << desti << endl;
        count++;
        return;
    }
    Tower_of_honai(disk-1, start , helper, desti, count);
    cout << "Move disk " << disk << " from " << start << " to " << desti << endl;
    count++;
    Tower_of_honai(disk-1, helper, desti, start, count);
}
int main() {
    int disk;
    int count = 0;
    cin >> disk;
    Tower_of_honai(disk, 'A', 'C' , 'B', count);
    cout << "Total Number of Moves are: " << count << endl;
    return 0;
}