#ifndef VETOR_H
#define VETOR_H
#include <cstdlib>

const int MAX = 500;
typedef double Vetor[MAX];
double expressao(double x);
void calcComp(Vetor &x, Vetor &y, int n);

#endif