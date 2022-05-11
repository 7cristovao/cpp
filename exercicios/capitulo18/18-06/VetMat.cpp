#include <iostream> // para cin, cout, etc
#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Vetor em tempo de compilacao (alocacao estatica):
    TVet x; // Declaracao

    // Vetor em tempo de execucao (alocacao dinamica):
    cout << "Dimensao do vetor?...";
    int n;
    cin >> n;
    TVet v; // Declaracao
    Aloca(v, n); // Chamada de Aloca
 
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void Aloca(TVet &x, int n)
{
    x = new double[n];
}