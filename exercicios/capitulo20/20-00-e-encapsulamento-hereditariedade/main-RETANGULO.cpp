// Arquivo main.cpp
#include <iostream> // cin, cout, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.
#include "Figura.h"
#include "Retangulo.h"

using namespace std;

int main (int argc, char *argv[])
{
    Retangulo r;
    r.setCor("azul");
    r.setBase(3.0);
    r.setAltura(2.0);
    cout << "A area do retangulo r eh " << r.calcArea() 
         << endl;
    cout << "A cor do retangulo r eh " << r.getCor()
         << endl;

    Retangulo *pr = new Retangulo;
    pr->setCor("vermelho");
    pr->setBase(1.0);
    pr->setAltura(4.0);
    cout << "A area do retangulo apontado por pr eh "
         << pr->calcArea() << endl;
    cout << "A cor do retangulo apontado por pr eh "
         << pr->getCor() << endl;
    delete pr;
	system("read -p 'Aperte Enter para continuar...' var");
	return 0;
}