#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, m;
    cout << "\na = "; cin >> a; cout << "\nb = "; cin >> b;
    m = (a * 3 + b * 5)/8;
    if (m>5)
        cout << "\naprovado";
    else
        cout << "\nreprovado\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
