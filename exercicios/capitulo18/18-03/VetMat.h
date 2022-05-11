#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>
#include <iomanip>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Dimensao constante e estatica.
const int DIM = 3;
// Tipo TVetor estatico.
typedef double TVetor[DIM];

// Funcao para somar dois TVetores.
void SomaVet(TVetor &x, TVetor &y, TVetor &z);

#endif