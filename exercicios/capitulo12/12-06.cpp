#include <iostream>
#include <cmath>

// declaracao da funcao
double SinalDoParametroX(double x);

using namespace std;

int main(int argc, char *argv[])

{
    double x;
    cout << "\nx = "; cin >> x;
    cout << SinalDoParametroX (x) << endl;
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}

// definicao da funcao
double SinalDoParametroX(double x)
{
    if (x == 0) return 0;
    else if (x > 0) return 1;
    else return -1;
}
