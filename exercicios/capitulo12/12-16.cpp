#include <iostream>

// declaracao da funcao
// -----------------------------------
double DobroTriplo (double x, double &y);
void DobroTriplo (double x, double &y, double &z);
//------------------------------------

using namespace std;

int main (int argc, char *argv[])
{
    double x, dx, y = 7.0, z, w;
    cout << "digite x: "; cin >> x;
    x = DobroTriplo (7.0, y); // DobroTriplo de 7 atribuido a x.
    DobroTriplo(7.0, y, dx); // DobroTriplo de 7 retornado em dx. 
    z = DobroTriplo(x, y); // DobroTriplo de x e y atribuido a z
    DobroTriplo (x, y, z);
    cout << "\nx = " << x;
    cout << "\ndx = " << dx;
    cout << "\nz = " << z;
    cout << "\ny = " << y;
    cout << "\nw = " << w << endl;
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
