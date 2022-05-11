#include <iostream>
#include <cstdlib> // para a funcao rand()
#include <cmath>

#include "Valores.h"

using namespace std; 

int main(int argc, char *argv[])
{
    Valores x;
    int m;
    int n;
    m = 100; // Tamanho da Matriz xy
    n = 200;
    media(x, m, n);
    desvioPadrao(x, m, n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double media(Valores &x, int m, int n)
{

}
double desvioPadrao(Valores &x, int m, int n);
{
    
}