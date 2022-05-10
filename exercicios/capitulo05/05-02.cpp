#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, d, m;
    cout << "\na = "; cin >> a; cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c; cout << "\nd = "; cin >> d;
    m = (a * 3 + b * 5 + c * 1 + d * 1)/10;
    cout << "\nmedia = " << m;
    if (m>5)
        cout << "\naprovado\n";
    else
        cout << "\nreprovado\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
