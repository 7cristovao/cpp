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
    EscreveMatriz(b, m, m); // Chamada de EscreveMatriz
 
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void EscreveMatriz(TMat &x, int n, int m)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(10) << x[i][j];
        }
        cout << endl;
    }
}