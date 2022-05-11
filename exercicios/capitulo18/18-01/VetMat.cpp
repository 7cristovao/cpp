#include <iostream> // para cin, cout, etc
#include <iomanip> // para setw, etc.
#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Vetor em tempo de compilacao (alocacao estatica):
    TVetor v; // Declaracao
    LeVetor(v); // Chamada de LeVetor

    // Vetor em tempo de execucao (alocacao dinamica):
    cout << "Dimensao do vetor?...";
    int n;
    cin >> n;
//    TVet v; // Declaracao
    //LeVetor(v, n); // Chamada de LeVetor

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void LeVetor(TVetor &x)
{
    for(int i = 0; i < DIM; i++){
        cout << "Componente " << i << ": ";
        cin >> x[i];
    }
}