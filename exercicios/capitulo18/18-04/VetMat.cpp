#include <iostream> // para cin, cout, etc
#include "VetMat.h"
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    // Matriz em tempo de compilacao (alocacao estatica)
    TMatriz a; // Declaracao
    LeMatriz(a); // Chamada de LeMatriz

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void LeMatriz(TMatriz &x)
{
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            cout << "Componente " << i << ", " << j << ": ";
            cin >> x[i][j];
        }
    }
}
