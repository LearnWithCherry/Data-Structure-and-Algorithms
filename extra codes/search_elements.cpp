#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Key: ";
    cin >> key;
cout << "Found at index: "<<binarysearch(arr, size, key) << "\n";
    return 0;
}