// Arquivo main.cpp
#include <iostream> // printf, scanf, cin, cout, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.
#include "../include/nr.h"
// O cabecalho "nr.h" foi colocado na pasta "include", irma desta.
#include "EntradaSaida.h"
#include "Determinante.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Declaracao da matriz "a", do vetor "indx" e do valor "d":
    int n = 4;
    Mat_IO_DP a(n, n);
    Vec_O_INT indx(n);
    DP d;
    // Preenchimento da matriz "a":
    preencheMatriz(a);
    // Exibicao da matriz "a";
    exibeMatriz(a, "Matriz a (n xn):");
    // Calculo do Determinante da matriz "a";
    DP det = determinanteMatriz(a);
    exibeEscalar(det, "Determinante da matriz a:");
    // Chamada do metodo de decomposicao LU:
    NR::ludcmp(a, indx, d);
    // Exibicao da matriz "a" apos a chamada de "ludcmp":
    exibeMatriz(a,
            "Matriz a (n x n) depois da chamada de \"ludcmp\":\n"
            "Ela se transformaou nas matrizes L (banda superior nula)\n"
            "e U (banda inferior nula), a = L * U, com algumas possí-\n"
            "veis trocas de linhas."
    );

    // Exibicao do vetor "indx" apos a chamada de "ludcmp":
    exibeVetor(indx,
            "Vetor indx (n) depois da chamada de \"ludcmp\":n"
            "Ele registra o efeito da permutacao de linhas com\n"
            "pivotamento parcial."
    );

    // Exibicao do escalar "d" apos a chamada de "ludcmp":
    exibeEscalar(d,
            "Escalar d depois da chamada de \"ludcmp\":\n"
            "Ele pode ser +1 ou -1, conforme o numero de permutacoes\n"
            "de linhas seja par ou impar, respectivamente."
            );

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
