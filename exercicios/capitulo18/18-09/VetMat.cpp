#include <iostream> // para cin, cout, etc
#include <iomanip>
#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Vetor em tempo de execucao (alocacao dinamica):
    TVet v; // Declaracao
    Desaloca(v); // Chamada de Desaloca

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
void Desaloca(TVet &x)
{
    delete []x;
}