#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x;
    int z, m;
    cout << "\nx = "; cin >> x;
    z = x;
    cout << "\ny = " << z;
    if (x == z)
        cout << "\nx eh um numero inteiro\n";
    else
        cout << "\nx nao eh um numero inteiro\n";
    m = z % 10;
    cout << "\nm = " << m;
    if (m == 0 && z >= 10)
        cout << "\neh um numero multiplo de 10\n";
    else
        cout << "\nnao eh um numero multiplo de 10\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}   
