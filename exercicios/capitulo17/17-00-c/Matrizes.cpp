#include <iostream>
#include "Matrizes.h"

using namespace std;

int main(int argc, char *argv[])
{
//  Tipo     nome     [quantLinhas]      [quantColunas];
    int      y        [2]                [3]             = { {1, 2, 0},
                                                             {4, 6, 6} };
    
    double   z        [3]                [4]             = { { 1.2, -3.4, 5.6, -7.8},
                                                             { 9.1, -2.4, 6.8,  8.2},
                                                             {-2.1, -8.3, 5.2, -9.4}};

//  Matriz de 100 linhas e 200 colunas (double) 
//  seria equivalente a 20.000 (100x200) variaveis do tipo double
    
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}