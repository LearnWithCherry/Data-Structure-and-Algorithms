#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, n;
    cin>>size; //reading the size of the Array

    int *arr = new int[size];

    cin>>n; //Number of elements

    for(int i=0; i<n; i++)
    {
    cin>>arr[i];
    }

    //Insert at any index

    int value, index;

    cin>>value;
    cin>>index;

    //Insert the value at index

    for(int i=n-1; i>= index; i--)
    {
    arr[i+1] = arr[i];
    }
    arr[index] = value; //Place the value at index
    n++; //Number of elements has been updated

    //Print the Array

    for(int i=0; i<n; i++)
    cout<<arr[i] <<"\t";

return 0;
}