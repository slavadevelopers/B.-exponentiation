#include <iostream>

using namespace std;

int main()
{
    short int x, x2;
    int x3, x5;
    cin >> x;
    x2 = x * x;
    x3 = x2 * x;
    x5 = x2 * x3;
    cout << x2 << ' ' << x3 << ' ' << x5 << endl;
    return 0;
}
