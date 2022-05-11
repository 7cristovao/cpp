#include <iostream>
#include <cmath>
// Arquivo TrezeE10.cpp
// ----------------------------------------------------------------------------
#include "TrezeE10.h"
// ----------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
    double q;
    cout << "digite q: "; cin >> q;
    cout << "geom(q) = " << geom(q) << endl;
    system ("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//-----------------------------------------------------------------------------
double geom(double q)
{
    if (fabs(q) >= 1) return INFINITY;
    double p = 1.0;
    double s = 1.0;
    for(int k = 1; k < 20; k++){
        p *= q;
        s += p;
    }
    return s;
}
//-----------------------------------------------------------------------------
