#include <iostream> // cin, cout,     etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.

//---------------------------------------------------------
int dividir (int a, int b);
float dividir (float a, float b);
//---------------------------------------------------------

using namespace std;

int main(int argc, char *argv[])
{
   int x = 5, y = 2;
   float p = 5.0, q = 2.0;
   cout << dividir (x, y) << endl;
   cout << dividir (p, q) << endl;
                
   system("read -p 'Pressione qualquer tecla para continuar...' var");
   return 0;
}
//---------------------------------------------------------
int dividir (int a, int b)
{
    return a / b;
}
//---------------------------------------------------------
float dividir (float a, float b)
{
    return a / b;
}
//---------------------------------------------------------

