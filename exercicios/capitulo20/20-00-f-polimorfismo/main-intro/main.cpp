#include <iostream>
#include <cmath>
#include "Retangulo.h"
#include "Quadrado.h"
#include "Elipse.h"

using namespace std;

int main(int argc, char *argv[])
{
	Retangulo r;
    
    Quadrado q;
    r = q;           // Esta atribuicao eh permitida pois
    r.setBase(1.0);  // todo Quadrado eh tambem um Retangulo 
    cout << "Quadrado: " << endl; // o contrario nao eh valido
    cout << " Base: " << r.getBase() << endl;
    cout << " Altura: "  << r.getAltura() << endl;
    cout << " Area: " << r.calcArea() << endl;

    Elipse e;
    r = e;
    r.setBase(2.0);
    r.setAltura(2.0);
    cout << " Elipse: " << endl;
    cout << " Base: " << r.getBase() << endl;
    cout << " Altura: " << r.getBase() << endl;
    cout << " Area: " << r.calcArea() << endl;

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}