// Arquivo Determinante.cpp
#include "Determinante.h"
//----------------------------------------------------------
DP determinanteMatriz(Mat_IO_DP &a)
{
    Mat_IO_DP x(a);
    Vec_O_INT indx(x.nrows());
    DP d;
    NR::ludcmp(x, indx, d);
    for(int i = 0; i < x.nrows(); i++)
        d *= x[i][i];
    return d;
}
//----------------------------------------------------------
