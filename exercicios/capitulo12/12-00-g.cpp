#include <iostream> // cin, cout,     etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.

//---------------------------------------------------------
int dividir (int a, int b=2);    
//---------------------------------------------------------

using namespace std;

int main(int argc, char *argv[])
{
   cout << dividir (12);
   cout << endl;
   cout << dividir (20, 4);
   cout << endl;
   system("read -p 'Pressione qualquer tecla para continuar...' var");
   return 0;
}
//---------------------------------------------------------

int dividir (int a, int b)
{
    int r;
    r = a / b;
    return r;
}

//---------------------------------------------------------

