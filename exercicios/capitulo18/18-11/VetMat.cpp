#include <iostream> // para cin, cout, etc
#include <iomanip>

#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Matriz em tempo de execucao (alocacao dinamica):
    cout << "Ordem da matriz...";
    int m;
    cin >> m;
    TMat b; // Declaracao
    Aloca(b, m, m); // Chamada de Aloca

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
void Aloca(TMat &x, int n, int m)
{
    x = new double *[n];
    for(int i = 0; i < m; i++)
        x[i] = new double [m];
}