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
int ParOuImpar(int y)// (a2) verifica se eh par ou impar
{
    y = z % 2;
    cout << "\ny = " << y;
    if (y == 1 || y == -1)
        cout << "\nx eh impar\n";
    else
        cout << "\nx eh par\n";
    
}
//
