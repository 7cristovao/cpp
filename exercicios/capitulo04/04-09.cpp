#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c, a, b;
    cout << "\na= "; cin >> a; cout << "\nb ="; cin >> b;
    c = a > b ? 2 * a : 3 * b;
    cout << "\na=" << a << "\nb=" << b << "\nc=" << c << "\n" << endl;
    return 0;
}
