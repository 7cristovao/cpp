#include <iostream>
#include <cmath>

// declaracao da funcao
double PolegadaParaCentimetro(double pol);

using namespace std;

int main(int argc, char *argv[])

{
    double pol;
    cout << "polegadas = "; cin >> pol;
    cout << "Polegadas para centimetros = "
         << PolegadaParaCentimetro (pol) << endl;
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}

// definicao da funcao
double PolegadaParaCentimetro(double pol)
{
    return pol * 2.54;
}
