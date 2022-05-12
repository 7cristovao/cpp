#include "Tipos.h"
void troca(Item &x, Item &y)
{
	Item aux = x;
	x = y;
	y = aux;
}