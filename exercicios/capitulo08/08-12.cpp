#include <iostream>

using namespace std;

double sinal(double x)
{
    if (x == 0)
        cout << "\nnulo\n";
    else if (x > 0)
        cout << "\npositivo\n";
    else
        cout << "\nnegativo\n";
    return x;
}

int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx = "; cin >> x;
    y = sinal(x);
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
