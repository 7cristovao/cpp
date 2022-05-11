#include <iostream>         // cin, cout, etc.
#include <cmath>            // M_PI, M_E, sin, cos, etc.
#include "UnidadeExemplo.h" // Aqui eh incluido o conte- 
                            // udo do arquivo de cabecalhos

using namespace std;

int main (int argc, char *argv[])
{
    double a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    double resp = Media(a,b); // Chamada da funcao
    cout << "Resposta= " << resp << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}

//definicao da funcao
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
