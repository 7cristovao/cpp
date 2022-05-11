#include <iostream>
#include <cstdlib> // para a funcao rand()

#include "Taxas.h"

#include "main.cpp"

void indiceMaior(Taxas &x, int n, int &indi, int &indj)
{
    if(n < 1) n = 1;
    else if(n > TA) n = TA; // Valida a entrada
    long double maior = x[0][0];
    int indMa = 0;
    for(int i = 0; i < n; i++) // Varia de 0 a n-1
        for(int j = 0; j < n; j++) // Varia de 0 a n-1
            if (x[i][j] > maior){
                maior = x[i][j]; // Determina maior
                indi = i; // Índice i do maior
                indj = j; // Índice j do maior
            }
}