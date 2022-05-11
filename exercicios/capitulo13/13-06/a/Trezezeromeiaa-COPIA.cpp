#include <iostream>
// Arquivo trezezeromeia.cpp
// -----------------------------------------------------------------------------
#include "Trezezeromeiaa.h"
// -----------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
// console para verificar se eh numero inteiro
    double x;
    int z;
    cout << "\nx = "; cin >> x;
//    cout << "\ny = " << z;
    z = x;
    cout << VerificaInteiro (x) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

// definicao da funcao
// ----------------------------------------------------------------------------
double VerificaInteiro(double x) // (a1) verifica se eh numero inteiro
{
    int z;
    z = x;
    if (x == z) return printf("\nx eh um numero inteiro\n") - 24;
    else return printf("\nx nao eh um numero inteiro\n") - 28;    
}
// ----------------------------------------------------------------------------
