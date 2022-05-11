#include <iostream> // para cin, cout, etc
#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Soma dos vetores estaticos u1 e u2:
    TVetor u1, u2, resposta;
    SomaVet(u1, u2, resposta);

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void SomaVet(TVetor &x, TVetor &y, TVetor &z)
{
    for(int i = 0; i < DIM; i++)
        z[i] = x[i] + y[i];
}