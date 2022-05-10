#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    int x, x1, x2, x3, x4, x5;
    cout << "\nvalor inteiro da compra = "; cin >> x;
    if (x > 0 && x <= 60)
    {
        x2 = x / 5;
        if (x2 <= 10)
        {
            cout << x2 << " notas de R$ 5,00 necessarias \n";
            cout << x - x2 * 5 << " notas de R$ 1,00 necessarias \n";
            cout << "\n" << endl;
        }
        else
        {
            x3 = x2 % 10;
            x4 = x2 - x3;
            cout << x4 << " notas de R$ 5,00 necessarias \n";
            cout << x - x4 * 5 << " notas de R$ 1,00 necessarias \n";
            cout << "\n" << endl;
        }
    }
    else if (x < 1)
        cout << "\nERRO: nao houve compra porque o gasto esta menor que 1 real" << "\n" << endl;
    else
    cout << "\nERRO: compra maior que 60 reais" << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

