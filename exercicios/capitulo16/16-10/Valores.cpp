#include <iostream>
#include "Valores.h"

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    Valores x;
    leValores(x, n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void leValores(Valores &x, int n)
{
    if(n < 1) n = 1;
    else if(n > COMP) n = COMP; // Valida a entrada
    for(int i = 0; i < n; i++) { // Varia de - a n-1
        cout << "Componente[" << i << "]=";
        cin >> x[i];
    }
}


