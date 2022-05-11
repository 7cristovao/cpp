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
// Tipo TMatriz estatica.
typedef double TMatriz[DIM][DIM];

// Funcao para ler uma TMatriz.
void LeMatriz(TMatriz &x);

#endif