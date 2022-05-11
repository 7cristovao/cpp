#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Tipo TMat para alocacao dinamica.
typedef double **TMat;

void LeMatriz(TMat &x, int n, int m);
// Funcao para escrever uma TMat n x m(sobrecarregada).

#endif