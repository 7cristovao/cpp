#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, d, aux;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    if (b > a)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (c > a)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (d > a)
    {
        aux = a;
        a = d;
        d = aux;
    }
    if (c > b)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if (d > b)
    {
        aux = b;
        b = d;
        d = aux;
    }
    if (d > c)
    {
        aux = c;
        c = d;
        d = aux;
    }
    cout << a << "," << b << "," << c << "," << d << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...', var");
    return 0;
}
