#include <iostream>
// Arquivo Trezezeromeiab.cpp
// -----------------------------------------------------------------------------
#include "Trezezeromeiab.h"
// -----------------------------------------------------------------------------

using namespace std;

int main(int argc, char *argv[])
{
// console para transformar radianos em graus
    double rad;
    cout << "\nangulo em radianos = "; cin >> rad;
    cout << "\nangulo em graus = " << RadianosEmGraus (rad) << endl;
    system ("read -p 'Aperte Enter para continuar' var");
    return 0;
}

// definicao da funcao
//------------------------------------------------------------------------------
#include <cmath>
double RadianosEmGraus(double rad) // (b) transf rad em graus
{

//        180 r 
//  g =  -------
//         pi

    return 180 * rad / M_PI;
}
//------------------------------------------------------------------------------
