#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x;
    cout << "\nx = "; cin >> x;
    if (x == 0)
        cout << "\nnulo\n";
    else if (x > 0)
        cout << "\npositivo\n";
    else
        cout << "\nnegativo\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
