#include <iostream>
#include <cmath>
// Arquivo TREZEE09.cpp
// ----------------------------------------------------------------------------
#include "TrezeE09.h"
// ----------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
    double x;
    cout << "digite x: "; cin >> x;
    cout << "ln(x) = " << ln(x) << endl;
    system ("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//-----------------------------------------------------------------------------
double ln(double x)
{
    if (x <= 0) return NAN;
    double pot = (x-1) / (x - 1);
    double q = pot * pot;
    double p = pot;
    double s = 0.0;
    for(int k = 3; fabs(p) > 1E-8; k += 2){
        s += p;
        pot *= q;
        p = pot / k;
    }
    return 2.0 * s;
}
//-----------------------------------------------------------------------------
