#include <iostream> // para cin, cout, etc
#include <iomanip>

#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Matriz em tempo de compilacao (alocacao estatica)
    TMatriz a; // Declaracao
    EscreveMatriz(a); // Chamada de EscreveMatriz
    // Matriz em tempo de execucao (alocacao dinamica):
    cout << "Ordem da matriz...";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void EscreveMatriz(TMatriz &x)
{
    for(int i = 0; i < DIM; i++) {
        for(int j = 0; j < DIM; j++) {
            cout << setw(10) << x[i][j];
        cout << endl;
        }
    }
}