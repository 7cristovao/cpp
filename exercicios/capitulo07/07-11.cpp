#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double xa, ya, xb, yb, xc, yc, a, b, c, aux, tse;  
    // receber as coordenadas cartesianas
    cout << "\nxa = "; cin >> xa;
    cout << "\nya = "; cin >> ya;
    cout << "\nxb = "; cin >> xb;
    cout << "\nyb = "; cin >> yb;
    cout << "\nxc = "; cin >> xc;
    cout << "\nyc = "; cin >> yc;
    // verificar a existencia do triangulo
    a = sqrt(pow(xb-xc,2)+pow(yb-yc,2));
    b = sqrt(pow(xa-xc,2)+pow(ya-yc,2));
    c = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    cout << "\na = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c;
    tse = (a < b + c) && (b < a + c) && (c < a + b);
    cout << "\ntse = " << tse;
    if ((a < b + c) && (b < a + c) && (c < a + b))
        cout << "\ntriangulo existe";
    else
        cout << "\ntriangulo nao existe";
    // classificacao do triangulo
    if ((pow(b,2) + pow(c,2)) < pow(a,2))
    { 
        aux = sqrt(pow(b,2) + pow(c,2));
        a = sqrt(pow(b,2) + pow(c,2));
        a = aux;
        cout << "\nobtusangulo";
    }
    if ((pow(b,2) + pow(c,2)) == pow(a,2))
    { 
        aux == a;
        a == sqrt(pow(b,2) + pow(c,2));
        sqrt(pow(b,2) + pow(c,2)) == aux;
        cout << "\nretangulo";
    }
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
