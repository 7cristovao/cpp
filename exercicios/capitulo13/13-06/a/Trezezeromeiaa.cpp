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
    int z, y;
    cout << "\nx = "; cin >> x;
    z = x;
    cout << VerificaInteiro (x);
    y = x;
    cout << "\ny = " << y;
    cout << "\nz = " << z;
    cout << ParOuImpar(y) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

// definicao da funcao
// ----------------------------------------------------------------------------
double VerificaInteiro(double x) // (a1) verifica se eh numero inteiro
{
    int z;
    z = x;
    if (x == z) return 1;
    else return 0;    
}
// ----------------------------------------------------------------------------
int ParOuImpar(int y)// (a2) verifica se eh par ou impar
{
    int z;
    z = y;
    if (y == z) return z % 2;
    else if (y == 1 || y == -1) return 2;
    else if (y != 1 || y != -1) return 3;
    else return 0;
}
//
