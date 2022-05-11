#ifndef QUADRADO_H
#define QUADRADO_H
#include "Retangulo.h"//___________________________________
class Quadrado: public Retangulo    // A classe Quadrado eh
{                                   // derivada da classe
    public:                         // retangulo
        void setBase(double base);
        void setAltura(double altura);
};
#endif