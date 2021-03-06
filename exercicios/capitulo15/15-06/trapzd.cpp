// Arquivo trapzd.cpp
// Fonte:
// PRESS, William H. et al. Numerical Recipes in C++: The Art of
// Scientif Computing. Cambridge University Press. 2002.
#include <cmath>
#include "../include/nr.h"
// O cabecalho "nr.h" foi colocado na pasta "include", irma desta.

using namespace std;

DP NR::trapzd(DP func(const DP), const DP a, const DP b, const int n)
{
    DP x, tnm,sum,del;
    static DP s;
    int it,j;

    if (n == 1) {
        return (s=0.5*(b-a)*(func(a)+func(b)));
    } else {
        for (it=1,j=1;j<n-1;j++) it <<= 1;
        tnm=it;
        del=(b-a)/tnm;
        x=a+0.5*del;
        for (sum=0.0,j=0;j<it;j++,x+=del) sum += func(x);
        s=0.5*(s+(b-a)*sum/tnm);
        return s;
    }
}