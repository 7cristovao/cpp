#include <iostream>
// Arquivo trezezeromeia.cpp
// -----------------------------------------------------------------------------
#include "trezezeromeia.h"
// -----------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
// console para verificar se eh par ou impar

    double x;
    int z, y;
    cout << "\nx = "; cin >> x;
    cout << "\ny = "; cin >> z;
    system ("read -p 'Aperte Enter para continuar' var");
    return 0;
}

// definicao da funcao
// ----------------------------------------------------------------------------
int ParOuImpar(int x) // (a) verifica se eh par ou impar
{
    double x;
    int z, y;
//    cout << "\nx = "; cin >> x;
    z = x;
//    cout << "\ny = " << z;
    if (x == z) return cout << "\nx eh um numero inteiro\n";
    else return cout << "\nx nao eh um numero inteiro\n";
/////////////////////////////////
    y = z % 2;
    cout << "\ny = " << y;
    if (y == 1 || y == -1)
        cout << "\nx eh impar\n";
    else
        cout << "\nx eh par\n";
}
//------------------------------------------------------------------------------
double RadianosEmGraus(double rad) // (b) transf rad em graus
//------------------------------------------------------------------------------
double CosenoDeUmAnguloEmGraus(double cos) // (c) transf cos de um ang em graus
//------------------------------------------------------------------------------
double AreaEsfera(double re) // (d) calcula a area de uma esfera
//------------------------------------------------------------------------------
double VolumeEsfera(double re) // (e) calcula o volume de uma esfera
//------------------------------------------------------------------------------
double AreaRetangulo(double B, double H) // (f) calc. a area de um retangulo
//------------------------------------------------------------------------------
double PerimetroRetangulo(double B, double H) // (g) calc. o perim. de um ret.
//------------------------------------------------------------------------------
