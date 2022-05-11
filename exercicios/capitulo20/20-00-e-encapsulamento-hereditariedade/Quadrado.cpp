#include "Quadrado.h"
void Quadrado::setBase(double base)
{
	Retangulo::setBase(base);
	Retangulo::setAltura(base);
}
void Quadrado::setAltura(double altura)
{            //_______---------------Esta operacao setBase
	Retangulo::setBase(altura);   // eh a da classe Retangulo
	Retangulo::setAltura(altura); // e tambem o eh a operacao
}                                 // setAltura
