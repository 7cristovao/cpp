#include <iostream> // para cin, cout, etc
#include <iomanip> // setw, etc
#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Vetor em tempo de compilacao (alocacao estatica):
    TVetor v; // Declaracao
    EscreveVetor(v); // Chamada de EscreveVetor

    // Vetor em tempo de execucao (alocacao dinamica):
    cout << "Dimensao do vetor?...";
    int n;
    cin >> n;
 //   TVet v; // Declaracao

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void EscreveVetor(TVetor &x)
{
    for(int i = 0; i < DIM; i++)
        cout << setw(10) << x[i];
    cout << endl;
}