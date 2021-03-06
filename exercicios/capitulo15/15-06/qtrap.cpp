// Arquivo qtrap.cpp
// Fonte:
// PRESS, William H. et al. Numerical Recipes in C++: The Art of
// Scientif Computing. Cambridge University Press. 2002.
#include <cmath>
#include "../include/nr.h"
// O cabecalho "nr.h" foi colocado na pasta "include", irma desta.

using namespace std;

DP NR::qtrap(DP func(const DP), const DP a, const DP b)
{
    const int JMAX=20;
    const DP EPS=1.0e-10;
    int j;
    DP s,olds=0.0;
    for (j=0;j<JMAX;j++) {
        s=trapzd(func,a,b,j+1);

        if (j > 5)
            if (fabs(s-olds) < EPS*fabs(olds) ||
                (s == 0.0 && olds == 0.0)) return s;
        olds=s;
    }
    nrerror("Too many steps in routine qtrap");
    return 0.0;
}