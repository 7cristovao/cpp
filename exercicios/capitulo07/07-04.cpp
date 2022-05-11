#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, aux;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (a < c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    cout << a << "\n";
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var"); 
    return 0;
}
