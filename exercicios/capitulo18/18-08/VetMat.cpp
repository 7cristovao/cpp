#include <iostream> // para cin, cout, etc
#include <iomanip>
#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Vetor em tempo de execucao (alocacao dinamica):
    cout << "Dimensao do vetor?...";
    int n;
    cin >> n;
    TVet v; // Declaracao
    EscreveVetor(v, n); // Chamada de EscreveVetor

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void EscreveVetor(TVet &x, int n)
{
    for(int i = 0; i < n; i++)
        cout << setw(10) << x[i];
    cout << endl;
}