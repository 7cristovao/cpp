#include <iostream>
#include "Valores.h"

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    Valores x;
    escreveValores(x, n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void escreveValores(Valores &x, int n)
{
    if(n < 1) n = 1;
    else if(n > COMP) n = COMP; // Valida a entrada
    for(int i = 0; i < n; i++) { // Varia de 0 a n-1
        cout << "Componente[" << i << "]=" << x[i] << endl;
    }
}