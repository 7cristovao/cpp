#include <iostream> // cin, cout,     etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.

void FazAlgo ();

void LimpaTudo (int &x, float &z);

float Dobra (float w);

using namespace std;

int main (int argc, char *argv[])
{
    FazAlgo();
//    LimpaTudo(int &x, float &z);
    system("read -p 'Pressione qualquer tecla para continuar' var");
    return 0;
}

void FazAlgo()
{
    int u = 3;
    float w = 4.0;
    LimpaTudo(u, w); // Chamada da função LimpaTudo
}

void LimpaTudo(int &x, float &z)
{
    x = 0;
    z = 0.0;
    float y = Dobra(2.0); //Chamada da função Dobra
}

float Dobra(float x)
{
    float w = 2.0 * x;
    return w;
}
