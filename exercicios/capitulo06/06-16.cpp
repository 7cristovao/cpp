#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x;
    int z, u, d;
    cout << "\nx = "; cin >> x;
    z = x;
    cout << "\nz = " << z;
    if (x == z)
    {
        cout << "\nx eh um numero inteiro\n";
        if (x >= 0 && x<= 99)
            if (x >= 10 && x <= 99)
            {
            u = z % 10;
            cout << u << " unidades\n";
            d = z / 10;
            cout << d << " dezenas\n";
            }
            else //if (x >= 0 && x <= 9)
            {
                u = z % 10;
                cout << u << " unidades\n";
            }
        else
            cout << "\no numero esta fora da faixa especificada" << endl;
    }
    else
        cout << "\nx nao eh um numero inteiro\n" << endl;
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
