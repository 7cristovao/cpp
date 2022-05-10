#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double sb, i, ir, a, pad, vip, sle;
    cout << "\nsalario bruto = "; cin >> sb;
    if (sb < 900)
    {
        a = 0;
        pad = 0;
    }
    else if (sb >= 900 && sb <= 1500)
    {
        a = 0.10;
        pad = 90;
    }
    else if (sb >= 1500 && sb <= 2500)
    {
        a = 0.20;
        pad = 240;
    }
    else if (sb >= 2500 && sb <= 4000)
    {
        a = 0.30;
        pad = 490;
    }
    else
    {
        a = 0.40;
        pad = 890;
    }
    i = (a * sb);
    ir = i - pad;
    sle = sb - ir;
    cout << "\nvalor da aliquota = " << a;
    cout << "\nvalor da parcela a deduzir = " << pad;
    cout << "\nvalor do imposto bruto = " << i;
    cout << "\nvalor do imposto pago = " << ir;
    cout << "\nsalario liquido do empregado = " << sle; 
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
