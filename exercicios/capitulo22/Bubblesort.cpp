#include "Bubblesort.h"
void bubblesort(Vetor &a, Tamanho n)
{
	for (Indice j = n - 1; j >= 0; j--)
		for(Indice i = 0; i < j; i++)
			if(a[i+1] < a[i]) troca(a[i+1], a[i]);
}