#include <iostream>

// declaracao da funcao
double f(double x);

using namespace std;

int main(int argc, char *argv[])

{
    double x;
    cout << "digite x: "; cin >> x;
    cout << "\nf (x) = " << f (x) << endl;
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}

// definicao da funcao
#include <cmath>
double f(double x)
{
    double y;
    if (x >= 0) y = exp(x) + log(fabs(x + 10));
    else y = x * x + sqrt(fabs(x));
    return y;
}
