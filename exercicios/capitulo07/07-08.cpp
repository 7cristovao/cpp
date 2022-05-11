#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, aux;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    if (b < a)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (c < a)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (c < b)
    {
        aux = b;
        b = c;
        c = aux;
    }
    cout << a << "," << b << "," << c << "\n";
    system("read -p 'Aperte Enter para continuar...', var");
    return 0;
}
