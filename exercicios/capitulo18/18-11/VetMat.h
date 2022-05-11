#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Tipo TMat para alocacao dinamica.
typedef double **TMat;

void Aloca(TMat &x, int n, int m);
// Funcao para ler uma TMat n x m(sobrecarregada).

#endif