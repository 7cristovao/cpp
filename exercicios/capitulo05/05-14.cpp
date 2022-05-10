#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double a, b, r, ar, ac, pc, pr;
    cout << "\na= "; cin >> a;
    cout << "\nb= "; cin >> b;
    cout << "\nr= "; cin >> r;
    ar = a * b;
    pr = 2*a + 2*b;
    ac = M_PI * r * r;
    pc = 2 * M_PI * r;
    cout << "\narea do retangulo= " << ar;
    cout << "\nperimetro do retangulo= " << pr;
    cout << "\narea do circulo = " << ac;
    cout << "\nperimetro do circulo = " << pc;
    if (ar < ac)
        cout << "\narea do retangulo eh menor que area do circulo";
    else
        cout << "\narea do retangulo eh maior que area do circulo";
    if (pr < pc)
        cout << "\nperimetro do retangulo eh menor que perimetro do circulo";
    else
        cout << "\nperimetro do retangulo eh maior que perimetro do circulo";
    cout << "\n";
    system("\n read -p 'Aperte Enter para continuar...' var");    
    return 0;
}
