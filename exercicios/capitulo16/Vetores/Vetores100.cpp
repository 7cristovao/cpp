#include <iostream> // printf, scanf, cin, cout, etc
#include <cmath> // M_PI, M_E, sin, cos, etc.
#include "Vetores.h"

using namespace std;

int main(int argc, char *argv[])
{
    Vetor x = {7, 13, -33, 66, 99, -22};
    int n = 6; // Tamanho do Vetor x
    cout << "Soma componentes.: " << soma(x, n) << endl;
    cout << "Quant. posit.: " << quantPos(x, n) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}