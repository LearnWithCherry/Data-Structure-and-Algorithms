#include<iostream>
using namespace std;

int main(){
	int arr[10] = {1,2,3,4,5,6};
	int size = 6;
	
	cout << "Befour Adding new Elements: ";
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
    }  
    cout << "\n";
	int newElement;
	cout << "Enter Elements you want to add: ";
	cin >> newElement;
	
	arr[size] = newElement;
	size ++;
	cout << "----------------\n"; 
	cout << "After Adding new Elements: ";
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
    }	
	return 0;
}
// time complexity is O(n)
