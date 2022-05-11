#include <iostream> // printf, scanf, cin, cout, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.
#include "../include/nr.h"
// O cabealho "nr.h" foi colocado na pasta "include", irma desta.
#include "EntradaSaida.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Declaracao das matrizes "a" e "b":
    int n = 4;
    int m = 3;
    Mat_IO_DP a(n, n), b(n, m);
    // Preenchimento da matriz "a":
    preencheMatriz(a);
    // Exibicao da matriz "a" antes da chamada de "gaussj":
    exibeMatriz(a, "Matriz a (n x n) antes da chamada de \"gaussj\":");
    // Preenchimento da matriz "b":
    preencheMatriz(b);
    // Exibicao da matriz "b" antes da chamada de "gaussj":
    exibeMatriz(a, "Matriz b (n x n) antes da chamada de \"gaussj\":");
    // Chamada do metodo de Gauss-Jordan com pivotamento total:
    NR::gaussj(a, b);
    // Exibicao da matriz "a" apos da chamada de "gaussj":
    exibeMatriz(a, 
       "Matriz a (n x n) depois da chamada de \"gaussj\":\n"
       "Ela se transformou na inversa da matriz a (n x n)."
    );
    // Exibicao da matriz "b" apos da chamada de "gaussj":
    exibeMatriz(b, 
       "Matriz b (n x m) depois da chamada de \"gaussj\":\n"
       "Ela se transformou na matriz x, onde a * x = b.\n"
       "Observe que cada coluna representa uma solucao\n"
       "dos m sistemas lineares com coeficientes dados\n"
       "pelas colunas da matriz b."
    );
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}