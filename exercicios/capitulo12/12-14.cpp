#include <iostream>

// declaracao da funcao
// -----------------------------------
double Dobro (double x);
void Dobro (double x, double &y);
//------------------------------------

using namespace std;

int main (int argc, char *argv[])
{
    double x, dx, y = 7.0, z, w; 
    cout << "digite x: "; cin >> x;
    x = Dobro (7.0); // Dobro de 7 atribuido a x.
    Dobro(7.0, dx);  // Dobro de 7 retornado em dx.
    z = Dobro(y);    // Dobro de y atribuido a z.
    Dobro(y, w);     // Dobro de y retornado em w.
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
double Dobro (double x)
{
    return 2 * x;
}
//-------------------------------------
void Dobro (double x, double &y)
{
    y = 2 * x;
}
//-------------------------------------
