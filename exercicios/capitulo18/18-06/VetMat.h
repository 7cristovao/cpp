#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Dimensao constante e estatica.
const int DIM = 3;

// Tipos e funcoes para alocacao dinamica.
typedef double *TVet;
// Tipo TMat para alocacao dinamica.
typedef double **TMat;

// Alocacao dinamica de um TVet com n componentes.
void Aloca(TVet &x, int n);

#endif