#include <iostream>
#include <cmath>

#include <cstdlib>
#include "Taxas.h"

using namespace std;

int main(int argc, char *argv[])
{
    Taxas x;
    for(int i = 0; i < 100; i++)
        x[i] = -1;
    cout << "\nindiceMaior = " << indiceMaior << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

int indiceMaior(Taxas &x, int n)
{
    if (n < 1) n = 1;
    else if(n > TA) n = TA; //valida a entrada
    long double maior = x[0];
    int indMa = 0;
    for(int i = 1; i < n; i++) // Varia de 1 a n-1
        if (x[i] > maior) {
            maior = x[i]; // determina maior
            indMa = i;    // Indice do maior
        }
    return indMa;
}