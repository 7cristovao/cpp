#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Dimensao constante e estatica.
const int DIM = 3;
// Tipo TVetor estatico.
typedef double TVet[DIM];

// FUncao para ler um TVet (sobrecarregada).
void LeVetor(TVet &x, int n);

#endif