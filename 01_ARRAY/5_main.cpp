#include <iostream>
using namespace std;

int main() {
    int arr[100];   // fixed max capacity of array
    int n;          // actual number of elements
    
    cout << "Enter initial size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\n====== Array Operations Menu ======\n";
        cout << "1. Insert at End\n";
        cout << "2. Insert at Position\n";
        cout << "3. Delete at Position\n";
        cout << "4. Shift Left by 1\n";
        cout << "5. Shift Right by 1\n";
        cout << "6. Find Maximum & Minimum\n";
        cout << "7. Display Array\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                // Insert at End
                int element;
                cout << "Enter element to insert at end: ";
                cin >> element;
                arr[n] = element; // directly add
                n++;
                cout << "Element inserted at end.\n";
                break;
            }

            case 2: {
                // Insert at Position
                int element, pos;
                cout << "Enter position (0 to " << n << "): ";
                cin >> pos;
                cout << "Enter element to insert: ";
                cin >> element;

                if (pos < 0 || pos > n) {
                    cout << "Invalid position!\n";
                } else {
                    // Shift right to make space
                    for (int i = n; i > pos; i--) {
                        arr[i] = arr[i-1];
                    }
                    arr[pos] = element;
                    n++;
                    cout << "Element inserted at position " << pos << ".\n";
                }
                break;
            }

            case 3: {
                // Delete at Position
                int pos;
                cout << "Enter position to delete (0 to " << n-1 << "): ";
                cin >> pos;

                if (pos < 0 || pos >= n) {
                    cout << "Invalid position!\n";
                } else {
                    for (int i = pos; i < n-1; i++) {
                        arr[i] = arr[i+1]; // shift left
                    }
                    n--;
                    cout << "Element deleted from position " << pos << ".\n";
                }
                break;
            }

            case 4: {
                // Shift Left
                if (n > 0) {
                    int temp = arr[0];
                    for (int i = 0; i < n-1; i++) {
                        arr[i] = arr[i+1];
                    }
                    arr[n-1] = temp;
                    cout << "Array shifted left by 1.\n";
                }
                break;
            }

            case 5: {
                // Shift Right
                if (n > 0) {
                    int temp = arr[n-1];
                    for (int i = n-1; i > 0; i--) {
                        arr[i] = arr[i-1];
                    }
                    arr[0] = temp;
                    cout << "Array shifted right by 1.\n";
                }
                break;
            }

            case 6: {
                // Find Max & Min
                if (n > 0) {
                    int maxVal = arr[0], minVal = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > maxVal) maxVal = arr[i];
                        if (arr[i] < minVal) minVal = arr[i];
                    }
                    cout << "Maximum = " << maxVal << ", Minimum = " << minVal << endl;
                } else {
                    cout << "Array is empty!\n";
                }
                break;
            }

            case 7: {
                // Display Array
                cout << "Array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }

            case 0:
                cout << "Exiting program. Bye!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
