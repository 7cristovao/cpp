#include "UnidadeExemplo.h" 
//----------------------------------
double Metade(double p)
{
    return p / 2.0;
}
double Soma(double p, double q)
{
    return p + q;
}
double Media(double p, double q)
{
    return Metade(Soma(p, q));
}
//----------------------------------
