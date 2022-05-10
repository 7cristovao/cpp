#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double a, x, b, y, c, d, e, f, delta, deltax, deltay;
    cout << "\na="; cin >> a;
    cout << "\nb="; cin >> b;
    cout << "\nc="; cin >> c;
    cout << "\nd="; cin >> d;
    cout << "\ne="; cin >> e;
    cout << "\nf="; cin >> f;
    c=a*x+b*y;
    f=d*x+e*y;
    x=deltax/delta;
    y=deltay/delta;
    delta=a*e-b*d;
    deltax=c*e-b*f;
    deltay=a*f-c*d;
    cout << "\nx =" << x;
    cout << "\ny =" << y;
    if (delta == 0 && deltax == 0 && deltay == 0)
        cout << "\nexistem infinitas solucoes";
    else if (delta == 0 && (deltax != 0 || deltay != 0))
        cout << "\nnao existe solucao";
    else
        cout << "\nindeterminado";
    cout << "\n";
    system("\n read -p 'Aperte Enter para continuar...' var");    
    return 0;
}
