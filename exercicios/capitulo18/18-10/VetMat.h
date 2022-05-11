#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Dimensao constante e estatica.
const int DIM = 3;

// Tipos e funcoes para alocacao dinamica.
typedef double *TVet;

// Funcao para calcular o prod escalar entre dois TVet(s)
double ProdEsc(TVet &x, TVet &y, int n);

#endif