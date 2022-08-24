#include <iostream>

using namespace std;

void TowerOfHanoi(int n, char a, char b, char c)
{
    if (n > 0)
    {
        TowerOfHanoi(n - 1, a, c, b);
        cout << a << " to " << c << endl;
        TowerOfHanoi(n - 1, b, a, c);
    }
}

int main()
{
    int num;

    cout << "Enter number of disks: ";
    cin >> num;

    TowerOfHanoi(num, 'A', 'B', 'C');

    return 0;
}