// Arquivo main.cpp
#include <iostream> // cin, cout, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.
#include "Figura.h"
#include "Retangulo.h"
#include "Quadrado.h"
#include "Elipse.h"

using namespace std;

int main (int argc, char *argv[])
{
    Quadrado q;
    q.setAltura(3.0);
    cout << "A area do quadrado q eh " << q.calcArea()
         << endl;

    Elipse *pe = new Elipse;
    pe->setBase(2.0);
    pe->setAltura(2.0);
    cout << "A área da elipse apontada por pe eh "
         << pe->calcArea() << endl;
    delete pe;  

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}