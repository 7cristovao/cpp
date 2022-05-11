#include <iostream>
#include <cmath>
#include <cstdlib> // para a funcao rand()
#include "Matrizes.h"

using namespace std;

int main(int argc, char *argv[])
{
    Matriz x = { { 7, 13, -33, 66},
                 {-5,  9,  -8, 34},
                 {13, 56,  99, 38},
                 { 9,-56, -87, 10} };
    int n = 6; // Tamanho da Matriz x
    cout << "Soma componentes.: " << soma(x, n) << endl;
    cout << "Quant. posit.: " << quantPos(x, n) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}