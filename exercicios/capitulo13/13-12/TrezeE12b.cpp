#include <iostream>
#include <cmath>
// Arquivo TrezeE12b.cpp
// ----------------------------------------------------------------------------
#include "TrezeE12b.h"
// ----------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
    double x, n;
    cout << "digite x: "; cin >> x;
    cout << "cosseno(x) = " << cosseno(x) << endl;
    system ("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//-----------------------------------------------------------------------------

double cosseno(double x)
{
    double c = 0.0;
    double p = 1.0, erro = 1E-10;
    double q = - x * x;
    for(int k = 1; fabs(p) > erro; k += 2){
        c += p;
        p *= q / (k * (k + 1));
    }
    return c;
}
//-----------------------------------------------------------------------------
