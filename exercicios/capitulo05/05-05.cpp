#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, m;
    cout << "\nnota a = "; cin >> a;
    cout << "\nnota b = "; cin >> b;
    m = (a + b)/2;
    if (m >= 5.0)
        cout << "\naprovado\n";
    else if (m >= 3.0 && m < 5.0)
        cout << "\nexame\n";
    else
        cout << "\nreprovado\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
