#include <iostream> // cin, cout, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.

//---------------------------------------------------------
float Dividir (float a, float b);
float Somar   (float a, float b, float c);
float Media   (float a, float b, float c);
//---------------------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
    float p = 5.0, q = 8.0, r = 7.5;
    cout << Media (p,q,r) << endl;
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}

//---------------------------------------------------------
float Dividir (float a, float b)
{
    return a / b;
}
float Somar   (float a, float b, float c)
{
    return a + b + c;
}
float Media   (float a, float b, float c)
{
    float s,m;
    s = Somar(a,b,c);
    m = Dividir(s, 3.0);
    return m;
    // ou return Dividir(Soma(a, b, c), 3.0);
}
//---------------------------------------------------------
