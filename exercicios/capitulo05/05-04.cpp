#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, d, m, at, aa, f;
    cout << "\nnota a = "; cin >> a;
    cout << "\nnota b = "; cin >> b;
    cout << "\nnota c = "; cin >> c;
    cout << "\nnota d = "; cin >> d;
    cout << "\naulas totais = "; cin >> at;
    cout << "\naulas assistidas = "; cin >> aa;
    m = (a*1 + b*1 + c*3 + d*5)/10;
    f = aa/at;
    if (m >= 5.0 && f >= 0.75)
        cout << "\naprovado\n";
    else
        cout << "\nreprovado\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
