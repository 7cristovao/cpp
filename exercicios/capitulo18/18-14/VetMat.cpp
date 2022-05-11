#include <iostream> // para cin, cout, etc

#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Matriz em tempo de execucao (alocacao dinamica):
    cout << "Ordem da matriz...";
    int m;
    cin >> m;
    TMat b; // Declaracao
    Desaloca(b, m); // Chamada de Desaloca

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void Desaloca(TMat &x, int n)
{
    for (int i = 0; i < n; i++)
        delete [] x[i];
    delete []x;
}