// Arquivo EntradaSaida.cpp
#include <iomanip>
#include "../include/nr.h"
// O cabecalho "nr.h" foi colocado na pasta "include", irma desta.
//-------------------------------------------------------------------
#include "EntradaSaida.h"
//-------------------------------------------------------------------
using namespace std;
//-------------------------------------------------------------------
void preencheMatriz(Mat_IO_DP &a)
{
    for(int i = 0; i < a.nrows(); i++)
        for(int j = 0; j < a.ncols(); j++)
            //a[i][j] = rand() % 10;
            a[i][j] = i == j ? 2.0 : 0.0;
}
//-------------------------------------------------------------------
void exibeMatriz(Mat_IO_DP &a, string tit)
{
    cout.precision(2);
    cout << tit << endl;
    for(int i = 0; i < a.nrows(); i++){
        for(int j = 0; j < a.ncols(); j++)
            cout << setw(13) << a[i][j];
        cout << endl;
    }
}
//------------------------------------------------------------------
void exibeVetor(Vec_O_INT &v, string tit)
{
    cout.precision(2);
    cout << tit << endl;
    for(int i = 0; i < v.size(); i++){
        cout << setw(13) << v[i];
      cout << endl;
    }
}
//-------------------------------------------------------------------
void exibeEscalar(DP &d, string tit)
{
    cout.precision(5);
    cout << tit << endl;
    cout << d << endl;
}
