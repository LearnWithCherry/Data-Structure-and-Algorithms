#include <bits/stdc++.h>
using namespace std;

// learning Pair
void explainPair(){
    pair<int, int> p = {1,3}; // now p is having 1,3 inside it 

    cout << p.first << " " << p.second << endl;  //  accessing data inside p using p.first and second

    pair<int, pair<int, int>> x = {1,{3,4}}; // string data using nested class

    cout << x.first << " " << x.second.second << " " << x.second.first << endl;  

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
}
         
// Vectors
void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector <pair <int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    
    
    cout << v.at(1);

}
int main(){
    explainVector();
    return 0;
}