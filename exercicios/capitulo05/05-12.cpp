#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x, u;
    int z, w, m;
    cout << "\nx = "; cin >> x;
    cout << "\nu = "; cin >> u;
    z = x;
    w = u;
    cout << "\nz = " << z;
    cout << "\nw = " << w;
    if (x == z)
        cout << "\nx eh um numero inteiro\n";
    else
        cout << "\nx nao eh um numero inteiro\n";
    if (u == w)
        cout << "\nu eh um numero inteiro\n";
    else
        cout << "\nu nao eh um numero inteiro\n";
    /////////////////////////////////////////////
    m = z % w;
    cout << "\nm = " << m;
    if (m == 0 && z >= w)
        cout << "\no primeiro numero eh multiplo do segundo numero\n";
    else
        cout << "\no primeiro numero nao eh multiplo do segundo numero\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}   
