#include <iostream>
#include <cmath>
#include <cstdlib> // para a funcao rand()
#include "Valores.h"

using namespace std;

int main(int argc, char *argv[])
{
    Valores x;
    int m;
    int n;
    n = 200; // Tamanho da Matriz x
    escreveValores(x, m, n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}