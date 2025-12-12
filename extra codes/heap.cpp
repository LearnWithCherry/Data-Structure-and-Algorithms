#include <iostream>
using namespace std;

class Heap {
public:
    int a[100];
    int n;

    Heap() {
        n = 0;
    }

    // 1. HEAPIFY (push-down)
    void heapify(int i) {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && a[left] > a[largest])
            largest = left;

        if (right <= n && a[right] > a[largest])
            largest = right;

        if (largest != i) {
            swap(a[i], a[largest]);
            heapify(largest);
        }
    }

    // 2. BUILD HEAP (from array)
    void buildHeap(){
        for(int i = n/2; i >= 0; i++){
            heapify(i);
        }
    }

    // 3. INSERT (push-up)
    void insert(int val) {
        n++;
        a[n] = val;

        int i = n;
        while (i > 1 && a[i] > a[i / 2]) {
            swap(a[i], a[i / 2]);
            i = i / 2;
        }
    }

    // 4. DELETE ROOT
    void deleteRoot() {
        if (n == 0) return;

        a[1] = a[n];
        n--;
        heapify(1);
    }

    // 5. GET MAX
    int getMax() {
        if (n == 0) return -1;
        return a[1];
    }

    // 6. INCREASE KEY (push-up)
    void increaseKey(int i, int newVal) {
        a[i] = newVal;

        while (i > 1 && a[i] > a[i / 2]) {
            swap(a[i], a[i / 2]);
            i = i / 2;
        }
    }

    // 7. HEAP SORT
    void heapSort() {
        int size = n; // size copy kra takki late use kr sake

        for (int i = n; i >= 2; i--) { // loop ko last se 2 tk run kra 2 because at 0 it is invalid index at 1 it is root
            swap(a[1], a[i]); // swap the last ele with root 
            n--; // reduce the size
            heapify(1); // fix heap using heapify funtion 
        }

        n = size; // restore size after sorting
    }

    // DISPLAY
    void display() {
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main() {
    Heap h;

    // insert values
    h.insert(10);
    h.insert(5);
    h.insert(20);
    h.insert(2);
    h.insert(15);

    cout << "Heap after insertions: ";
    h.display();

    cout << "Max element: " << h.getMax() << endl;

    h.deleteRoot();
    cout << "After deleting root: ";
    h.display();

    h.increaseKey(3, 50);
    cout << "After increasing index 3 to 50: ";
    h.display();

    h.heapSort();
    cout << "After heap sort: ";
    h.display();

    return 0;
}
