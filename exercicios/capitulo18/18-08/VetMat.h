#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Tipos e funcoes para alocacao dinamica.
typedef double *TVet;

// Funcao para escrever um TVet (sobrecarregada).
void EscreveVetor(TVet &x, int n);

#endif