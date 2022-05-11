#ifndef AMOSTRA_H
#define AMOSTRA_H

const int COMP = 100;
typedef double Valores[COMP];
void leValores(Valores &x, int n);
void escreveValores(Valores &x, int n);
double media(Valores &x, int n);
double desvioPadrao(Valores &x, int n);

#endif