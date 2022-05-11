#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Tipo TMat para alocacao dinamica.
typedef double **TMat;

// Desalocacao dinamica de uma TMat n x m.
void Desaloca(TMat &x, int n);

#endif