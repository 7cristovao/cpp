// Arquivo main.cpp
#include <iostream> // printf, scanf, cin, cout, etc.
#include "../include/nr.h"
// O cabecalho "nr.h" foi colocado na pasta "include", irma desta.
#include "Funcoes.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout.precision(5);
    DP raizF = NR::rtbis(f, 0.0, 2.0, 0.0001);
    cout << "A raiz da funcao f(x) = cos (x) - x no intervalo\n"
         << "de 0.0 até 2.0 com precisao 0.0001 usando o metodo\n"
         << "da bissecção é " << raizF << endl;
    DP raizG = NR::rtnewt(g, 0.0, 2.0, 0.0001);

cout << "A raiz da funcao g(x) = x * x - 2.0 no intervalo\n"
     << "de 0.0 até 2.0 com precisao 0.0001 usando o metodo\n"
     << "de Newton eh " << raizG << endl;

system("read -p 'Aperte Enter para continuar...' var");
return 0;
}