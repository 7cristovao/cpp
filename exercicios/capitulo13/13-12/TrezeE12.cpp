#include <iostream>
#include <cmath>
// Arquivo TrezeE12.cpp
// ----------------------------------------------------------------------------
#include "TrezeE12.h"
// ----------------------------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
    double x, n;
    cout << "digite x: "; cin >> x;
    cout << "digite n: "; cin >> n;
    cout << "cosseno(x, n) = " << cosseno(x, n) << endl;
    system ("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//-----------------------------------------------------------------------------
double cosseno(double x, int n)
{
    double c = 0.0;
    double p = 1.0;
    int k = 1;
    for(int i = 0; i < n; i++){
        c += p;
        p *= q / (k * (k + 1));
        k += 2;
    }
    return c;
}
//-----------------------------------------------------------------------------
