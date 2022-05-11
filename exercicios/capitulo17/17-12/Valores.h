#ifndef VALORES_H
#define VALORES_H
#include <iostream>

const int L = 100;
const int C = 200;
typedef double Valores[L][C];
double media(Valores &x, int m, int n);
double desvioPadrao(Valores &x, int m, int n);

#endif