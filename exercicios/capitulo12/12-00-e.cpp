#include <iostream> // cin, cout,     etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.

//---------------------------------------------------------
void DobraValor(int &a, int &b, int &c);    
//---------------------------------------------------------

using namespace std;

int main(int argc, char *argv[])
{
   int x = 1, y = 3, z = 7;
   cout << "Antes de chamar a funcao:" << endl;
   cout << "x=" << x << ", y=" << y << ", z=" << x << endl;
   DobraValor(x, y, z);
   cout << "Depois de chamar a funcao:" << endl;
   cout << "x=" << x << ", y=" << y << ", z=" << x << endl;
   system("read -p 'Pressione qualquer tecla para continuar...' var");
   return 0;
}
//---------------------------------------------------------
void DobraValor(int &a, int &b, int &c)
{
    a *= 2;    // ou a = a * 2;
    b = 2 * b; // ou b *= 2;
    c *= 2;    // ou c = c * 2;
}
//--------------------------------------------------------

