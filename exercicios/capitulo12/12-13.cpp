#include <iostream>

// declaracao da funcao
// -----------------------------------
double Dobro (double x);
void Dobro (double x, double &y);
//------------------------------------

using namespace std;

int main (int argc, char *argv[])
{
    double x, y;
    cout << "digite x: "; cin >> x;
    cout << "\ndobro de x = " << Dobro (x);
    Dobro (x, y);
    cout << "\nx = " << x;
    cout << "\ny = " << y << endl;
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
