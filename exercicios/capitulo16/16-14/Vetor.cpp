#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Vetor.h"

using namespace std;

int main(int argc, char *argv[])
{
    Vetor x;
    Vetor y;
    int n;
    cout << "Tamanho (máximo " << MAX << "): ";
    cin >> n;
//    leValores(x, n);
//    escreveValores(x, n);
    calcComp(x, y, n);
//    expressao(x);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double expressao(double x)
{
    return x * x + x - 1;
}

void calcComp(Vetor &x, Vetor &y, int n)
{
    if(n < 1) n = 1;
    else if(n > MAX) n = MAX; // Valida a entrada
    for(int k = 0; k < n; k++) // Varia de 0 a n-1
        y[k] = expressao(x[k]);
}