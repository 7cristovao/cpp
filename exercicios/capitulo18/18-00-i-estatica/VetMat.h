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

// Funcao para ler um TVetor.
void LeVetor(TVetor &x);
// Funcao para escrever um TVetor.
void EscreveVetor(TVetor &x);
// Funcao para somar dois TVetores.
void SomaVet(TVetor &x, TVetor &y, TVetor &z);

// Funcao para ler uma TMatriz.
void LeMatriz(TMatriz &x);
// Funcao para escrever uma TMatriz.
void EscreveMatriz(TMatriz &x);

// Tipos e funcoes para alocacao dinamica.
typedef double *TVet;
// Tipo TMat para alocacao dinamica.
typedef double **TMat;

// Alocacao dinamica de um TVet com n componentes.
void Aloca(TVet &x, int n);
// FUncao para ler um TVet (sobrecarregada).
void LeVetor(TVet &x, int n);
// Funcao para escrever um TVet (sobrecarregada).
void EscreveVetor(TVet &x, int n);
// Desalocacao dinamica de um TVert.
void Desaloca(TVet &x);
// Funcao para calcular o prod escalar entre dois TVet(s)
double ProdEsc(TVet &x, TVet &y, int n);
// Alocacao dinamica de uma TMat n x m
void Aloca(TMat &x, int n, int m);
// Funcao para ler uma TMat n x m(sobrecarregada).
void LeMatriz(TMat &x, int n, int m);
// Funcao para escrever uma TMat n x m(sobrecarregada).
void EscreveMatriz(TMat &x, int n, int m);
// Desalocacao dinamica de uma TMat n x m.
void Desaloca(TMat &x, int n);

#endif