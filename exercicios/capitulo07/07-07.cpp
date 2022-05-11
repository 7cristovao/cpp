#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, aux;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    if (a > b && a > c && b > c)
        cout << "\na = " << a << ", b = " << b << ", c = " << c << endl;
    if (b > a && b > c && a > c)
        cout << "\nb = " << b << ", a = " << a << ", c = " << c << endl;
    if (c > a && c > b && a > b)
        cout << "\nc = " << c << ", a = " << a << ", b = " << b << endl;
    if (a > b && a > c && b < c)
        cout << "\na = " << a << ", c = " << c << ", b = " << b << endl;
    if (b > a && b > c && a < c)
        cout << "\nb = " << b << ", c = " << c << ", a = " << a << endl;
    if (c > a && c > b && a < b)
        cout << "\nc = " << c << ", b = " << b << ", a = " << a << endl;
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var"); 
    return 0;
}
