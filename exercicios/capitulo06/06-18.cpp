#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    double x;
    cout << "x = "; cin >> x;
    if (x>0)
        cout << "Positivo\n";
    if (x<0) // faltou um else antes do IF que muda o fluxo do algoritmo
        cout << "Negativo\n";
    else
        cout << "Nulo\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

