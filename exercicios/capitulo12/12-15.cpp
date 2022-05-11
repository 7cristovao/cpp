#include <iostream>

// declaracao da funcao
// -----------------------------------
double DobroTriplo (double x, double &y);
void DobroTriplo (double x, double &y, double &z);
//------------------------------------

using namespace std;

int main (int argc, char *argv[])
{
    double x, y, z;
    cout << "digite x: "; cin >> x;
    DobroTriplo (x, y);
    cout << "\nx = " << x;
    cout << "\ny = " << y;
    DobroTriplo (x, y, z);
    cout << "\nx = " << x;
    cout << "\ny = " << y;
    cout << "\nz = " << z;
    system ("read -p 'Aperte Enter para continuar' var");
    return 0;
}

// definicao da funcao
// ------------------------------------
double DobroTriplo (double x, double &y)
{
    y = 3 * x;
    return 2 * x;
}
//-------------------------------------
void DobroTriplo (double x, double &y, double &z)
{
    y = 2 * x;
    z = 3 * x;
}
//-------------------------------------
