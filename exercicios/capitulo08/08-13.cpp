#include <iostream>

using namespace std;

double modulo(double x)
{
    if (x < 0)
        cout << -x;
    else
        cout << x;
    return x;
}

int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx = "; cin >> x;
    y = modulo(x);
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
