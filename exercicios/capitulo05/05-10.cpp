#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x;
    int z, y;
    cout << "\nx = "; cin >> x;
    z = x;
    cout << "\ny = " << z;
    if (x == z)
        cout << "\nx eh um numero inteiro\n";
    else
        cout << "\nx nao eh um numero inteiro\n";
/////////////////////////////////
    y = z % 2;
    cout << "\ny = " << y;
    if (y == 1 || y == -1)
        cout << "\nx eh impar\n";
    else
        cout << "\nx eh par\n";
    
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
