#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b;
    cout << "\na = "; cin >> a; 
    cout << "\nb = "; cin >> b;
    if (a > b)
        cout << "\na é maior que b\n";
    else if (a < b)
        cout << "\na é menor que b\n";
    else
        cout << "\na é igual a b\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
