#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, aux;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    if (a > b && a > c)
        cout << "\na = " << a << endl;
    if (b > a && b > c)
        cout << "\nb = " << b << endl;
    if (c > a && c > b)
        cout << "\nc = " << c << endl;
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var"); 
    return 0;
}
