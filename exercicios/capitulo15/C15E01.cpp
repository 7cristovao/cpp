#include <iostream>
#include <cmath>
// Arquivo C15E01.cpp
// ----------------------------------------------------------------------------
#include "C15E01.h"
// ----------------------------------------------------------------------------

using namespace std;

int main (int argc, char *argv[])
{
    int a, b, c, x, e, x0;
    cout << "\ndigite a: "; cin >> a;
    cout << "\ndigite b: "; cin >> b;
    cout << "\ndigite c: "; cin >> c;
    cout << "\ndigite e: "; cin >> e;
    cout << "\ndigite x0: "; cin >> x0;
    cout << "\nequacao(a,b,c,x) = " << equacao(a,b,c,x);
    cout << "\nderivada(a,b,x) = "  << derivada(a,b,x);
    cout << "\nnewtonRaphson(a,b,c,e,x0) = "  << newtonRaphson(a,b,c,e,x0);
    cout << "\nx = " << x << endl;
    system("read -p 'Aperte Enter para continuar' var");
    return 0;
}

double equacao(double a, double b, double c, double x)
{
    return a * pow(x, 3.0) + b * x + c;
}
double derivada(double a, double b, double x)
{
    return 3.0 * a * x * x + b;
}
double newtonRaphson(double a, double b, double c, double e, double x0)
{
    double x1, fx0, dfx0;
    fx0 = equacao(x0);
    dfx0 = derivada(x0);
    x1 = x0 - fx0 / dfx0;
    while(fabs(x1-x0) >= e){
        x0 = x1;
        fx0 = equacao(x0);
        dfx0 = derivada(x0);
        x1 = x0 - fx0 / dfx0;
    }
    return x1;
}

