#include <iostream>
#include <cmath>
// Arquivo C15E02.cpp
// ----------------------------------------------------------------------------
#include "C15E02.h"
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
    cout << "\nx = " << x << endl;
    system("read -p 'Aperte Enter para continuar' var");
    return 0;
}
//----------------------
double calcula(double a, double b, double c, double x)
{
    return -pow(b / a * x + c / a , 1.0 / 3.0);
}
//-----------------------
double iterativo(double a, double b, double c, double e, double x0)
{
    double x1, fx0, dfx0;
    x1 = calcula(a, b, c, x0);
    while (fabs(x1-x0) >= e){
        x0 = x1; x1 = calcula(a, b, c, x0);
    }
    return x1;
}
