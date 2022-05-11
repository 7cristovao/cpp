#include <iostream>
#include <cmath>
#include "Valores.h"

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    Valores x;
    cout << "\nMedia = " << Media(x, n);
    cout << "\ndesvioPadrao = " << desvioPadrao(x, n) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double Media(Valores &x, int n)
{
    if(n < 1) n = 1;
    else if(n > COMP) n = COMP;      // Valida a entrada
    int s = 0;
    for (int i = 0; i < n; i++)    // Varia de 0 até n-1
        s += x[i];                 // Acumulador
    return s / n;                   // media calculada
}
double desvioPadrao(Valores &x, int n)
{
    if(n < 1) n = 1;
    else if(n > COMP) n = COMP;      // Valida a entrada
    int s = 0;
    for (int i = 0; i < n; i++)    // Varia de 0 até n-1
        s += x[i];                 // Acumulador
    return sqrt(((s - Media(x, n)) * (s - Media(x, n))) / n-1);  // desvio padrao calculado
}