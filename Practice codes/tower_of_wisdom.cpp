#include <iostream>
using namespace std;

void tower_of_wisdom(int n, char src, char aux, char dest, int &count)
{
    if (n == 1)
    {
        count++;
        cout << "Move disk 1 from " << src << " to " << dest << endl;
        return;
    }
    tower_of_wisdom(n - 1, src, dest, aux, count);
    count++;
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;
    tower_of_wisdom(n - 1, aux, src, dest, count);
}

int main()
{
    int n;
    cout << "Enter number of disk: ";
    cin >> n;
    int count = 0;
    tower_of_wisdom(n, 'A', 'B', 'C', count);
    cout << "Total number of times the disk is moved: " << count << endl;
    return 0;
}
