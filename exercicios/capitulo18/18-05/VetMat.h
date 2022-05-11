#ifndef VETMAT_H
#define VETMAT_H

#include <iostream>

// Tipos e funcoes para alocacao estatica
// (em tempo de compilacao);

// Dimensao constante e estatica.
const int DIM = 3;
// Tipo TVetor estatico.
typedef double TVetor[DIM];
// Tipo TMatriz estatica.
typedef double TMatriz[DIM][DIM];


// Funcao para escrever uma TMatriz.
void EscreveMatriz(TMatriz &x);

#endif