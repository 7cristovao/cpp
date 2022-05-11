// Arquivo main.cpp
#include <iostream> // cin, cout, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.
#include "Figura.h"

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
	system("read -p 'Aperte Enter para continuar...' var");
	return 0;
}