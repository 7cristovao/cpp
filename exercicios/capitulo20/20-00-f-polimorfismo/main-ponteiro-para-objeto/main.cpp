#include <iostream>
#include <cmath>
#include "Retangulo.h"
#include "Quadrado.h"
#include "Elipse.h"

using namespace std;

int main(int argc, char *argv[])
{
	Retangulo *pr;
    
    Quadrado *pq = new Quadrado;
    pr = pq;           // Esta atribuicao eh permitida pois
    pr->setBase(1.0);  // todo Quadrado eh tambem um Retangulo 
    cout << "Quadrado: " << endl; // o contrario nao eh valido
    cout << " Base: " << pr->getBase() << endl;
    cout << " Altura: "  << pr->getAltura() << endl;
    cout << " Area: " << pr->calcArea() << endl;
    delete pq;

    Elipse *pe = new Elipse;
    pr = pe;
    pr->setBase(2.0);
    pr->setAltura(2.0);
    cout << " Elipse: " << endl;
    cout << " Base: " << pr->getBase() << endl;
    cout << " Altura: " << pr->getAltura() << endl;
    cout << " Area: " << pr->calcArea() << endl;
    delete pe;

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}