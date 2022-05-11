#include <iostream>
#include <iomanip>
#include "../include/nr.h"
// O Cabecalho "nr.h" foi colocado na pasta "include", irma desta.
#include "EntradaSaida.h"
//--------------------------------------
void preencheMatriz(Mat_IO_DP &a)
{
    for(int i = 0; i < a.nrows(); i++)
        for(int j = 0; j < a.ncols(); j++)
            a[i][j] = rand() % 10; //a[i][j] = i == j 7 5 : 2;
}
//--------------------------------------
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
//---------------------------------------