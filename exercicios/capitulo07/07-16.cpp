#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c, d, aux;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    cout << "\nd = "; cin >> d;
    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (a > d)
    {
        aux = a;
        a = d;
        d = aux;
    }
    cout << "menor = " << a << "\n";
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var"); 
    return 0;
}
