#ifndef AMOSTRA_H
#define AMOSTRA_H
#include <iostream>

const int L = 100;
const int C = 200;
typedef int Valores[L][C];
void leValores(Valores &mat, int m, int n);
void escreveValores(Valores &mat, int m, int n);
double media(Valores &mat, int m, int n);
double desvioPadrao(Valores &mat, int m, int n);

#endif