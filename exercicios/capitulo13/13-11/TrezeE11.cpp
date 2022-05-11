#include <iostream>
#include <cmath>
// Arquivo TrezeE11.cpp
// ----------------------------------------------------------------------------
#include "TrezeE11.h"
// ----------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
    double q, n;
    cout << "digite q: "; cin >> q;
    cout << "digite n: "; cin >> n;
    cout << "geom(q, n) = " << geom(q, n) << endl;
    system ("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//-----------------------------------------------------------------------------
double geom(double q, int n)
{
    if (fabs(q) >= 1) return INFINITY;
    double p = 1.0;
    double s = 1.0;
    for(int k = 1; k < n; k++){
        p *= q;
        s += p;
    }
    return s;
}
//-----------------------------------------------------------------------------
