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
    LeMatriz(b, m, m); // Chamada de LeMatriz

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void LeMatriz(TMat &x, int n, int m)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; j++) {
            cout << "Componente " << i << ", " << j << ": ";
            cin >> x[i][j];
        }
    }
}