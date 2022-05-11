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
    Figura f;
    cout << "Qual a cor do objeto f?... ";
    string c;
    cin >> c;
    f.setCor(c);
    cout << "A cor do objeto f eh " << f.getCor() << endl;

    Figura *p = new Figura;
    p->setCor("preto");
    cout << "A cor do objeto apontado por p eh "
         << p->getCor() << endl;
    delete p;

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