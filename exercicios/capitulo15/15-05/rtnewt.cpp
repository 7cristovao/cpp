// Arquivo rtnewt.cpp
// Fonte:
// PRESS, William H. et al. Numerical Recipes in C++: The Art of
// Scientif Computing. Cambridge University Press. 2002.
#include <cmath>
#include "../include/nr.h"
// O cabecalho "nr.h" foi colocado na pasta "include", irma desta.

using namespace std;

DP NR::rtnewt(void funcd(const DP, DP &, DP &), const DP x1, const DP x2, const DP xacc)
{
   const int JMAX=20;
   int j;
   DP df,dx,f,rtn;
   rtn=0.5*(x1+x2);
   for (j=0;j<JMAX;j++) {
       funcd(rtn,f,df);
       dx=f/df;
       rtn -= dx;
    if ((x1-rtn)*(rtn-x2) < 0.0)
        nrerror("Jumped out of brackets in rtnewt");
    if (fabs(dx) < xacc) return rtn;
    }
        nrerror("Maximum number of iteration exceeded in rtnewt");
    return 0.0;
}