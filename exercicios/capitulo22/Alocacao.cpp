#include "Alocacao.h"
void alocaVetor(Vetor &x, Tamanho n)
{
	x = new Item[n];
}
void desalocaVetor(Vetor &x)
{
	delete [] x;
}