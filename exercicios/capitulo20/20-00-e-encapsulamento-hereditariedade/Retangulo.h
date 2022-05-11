#ifndef RETANGULO_H
#define RETANGULO_H
#include "Figura.h"

class Retangulo: public Figura // A classe Retangulo eh
{                              // derivada da classe Figura
	private:
		double base;
		double altura;
	public:
        virtual void setBase(double base);
        double getBase();
        virtual void setAltura(double altura);
        double getAltura();
        virtual double calcArea();
};
#endif