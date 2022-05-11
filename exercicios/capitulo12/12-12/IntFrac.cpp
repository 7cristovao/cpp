// Arquivo IntFrac.cpp
//-------------------------------
#include <cmath>
#include "IntFrac.h"
//-------------------------------
#include <iostream>               // trecho nao aparece na resposta
//-------------------------------
using namespace std;

int main (int argc, char *argv[]) // trecho nao aparece na resposta
{
    double x;
    cout << "digite x: "; cin >> x;
    cout << "\nparte inteira = " << inteira (x);
    cout << "\nparte fracion = " << fracionaria (x) << endl;
    system ("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//--------------------------------
// definicao da funcao
// -------------------------------
double inteira (double x)
{
    double in = floor(fabs(x));
    return x >= 0.0 ? in : -in; //esta linha tambem pode ser...
                                //...escrita assim:
                                //if(x >= 0.0) return in;
                                //else return -in;
}
//---------------------------------
double fracionaria (double x)
{
    double mod = fabs(x);
    return mod - floor(mod);
}
//---------------------------------
