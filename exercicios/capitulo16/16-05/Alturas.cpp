#include <iostream>
#include <cmath>

#include <cstdlib>
#include "Alturas.h"

using namespace std;

int main(int argc, char *argv[])
{
    int n, i;
    cout << "\ndigite n: "; cin >> n;
    Alturas x[i];
    cout << "\nmaiorValor = " << maiorValor << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double maiorValor(Alturas &x, int n)
{
    if (n < 1) n = 1;
    else if(n > MA) n = MA; // valida a entrada
    double maior = x[0];
    for(int i = 1; i < n; i++) // Varia de 1 a n-1
        if (x[i] > maior) maior = x[i]; // determina maior
    return maior;
}