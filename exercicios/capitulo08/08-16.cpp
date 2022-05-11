#include <iostream>
#include <cmath>

using namespace std;

double volumeEsfera(double r)
{
    return 4.0/3.0*M_PI*pow(r,3);
}

int main(int argc, char *argv[])
{
    double v, r;
    cout << "\nraio da esfera = "; cin >> r;
    v = volumeEsfera(r);
    cout << "\nvolume = " << v << endl;
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
