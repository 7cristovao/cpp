#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double x;
    int z;
    cout << "\nx = "; cin >> x;
    z = x;
    cout << "\ny = " << z;
    if (x == z)
        cout << "\nx eh um numero inteiro\n";
    else
        cout << "\nx nao eh um numero inteiro\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
