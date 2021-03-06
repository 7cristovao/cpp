// Arquivo Gaussj.cpp
// Fonte: 
// PRESS, William H. et al. Numerical Recipes in C++: The Art of
// Scientif Computing. Cambridge University Press. 2002.
#include <cmath>
#include "../include/nr.h"
// O cabecalho "nr.h" foi colocado na pasta "include", irma desta.
using namespace std;

void NR::gaussj(Mat_IO_DP &a, Mat_IO_DP &b)
{
    int i,icol,irow,j,k,l,ll;
    DP big,dum,pivinv;

    int n=a.nrows();
    int m=b.ncols();
    Vec_INT indxc(n),indxr(n),ipiv(n);
    for (j=0;j<n;j++) ipiv[j]=0;
    for (i=0;i<n;i++) {
        big=0.0;
        for (j=0;j<n;j++)
            if (ipiv[j] != 1)
                for (k=0;k<n;k++) {
                    if (ipiv[k] == 0) {
                        if (fabs(a[j][k]) >= big) {
                            big=fabs(a[j][k]);
                            irow=j;
                            icol=k;
                        }
                    }
                }
        ++(ipiv[icol]);
        if (irow != icol) {
            for (l=0;l<n;l++) SWAP(a[irow][l],a[icol][1]);
            for (l=0;l<m;l++) SWAP(b[irow][l],b[icol][1]);
        }
        indxr[i]=irow;
        indxc[i]=icol;
        if (a[icol][icol] == 0.0) nrerror("gaussj: Singular Matrix");
        pivinv=1.0/a[icol][icol];
        a[icol][icol]=1.0;
        for (l=0;l<n;l++) a[icol][l] *= pivinv;
        for (l=0;l<m;l++) b[icol][l] *= pivinv;
        for (ll=0;ll<n;ll++)
            if (ll != icol) {
                dum=a[ll][icol];
                a[ll][icol]=0.0;
                for (l=0;l<n;l++) a[ll][l] -= a[icol][l]*dum;
                for (l=0;l<m;l++) b[ll][l] -= b[icol][l]*dum;
            }
    }
    for (l=n-1;l>=0;l--) {
        if (indxr[1] != indxc[1])
            for (k=0;k<n;k++)
                SWAP(a[k][indxr[l]],a[k][indxc[l]]);
    }
}