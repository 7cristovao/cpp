#include <iostream>
#include <cmath>
using namespace std;

double GrausParaRadianos(double g)
{
    return g*M_PI/180.0;
}

int main(int argc, char *argv[])
{
    double r, g;
    cout << "\nDigite o angulo em graus (g)= ";
    cin >> g;
    r = GrausParaRadianos(g);
    cout << "\nRadianos (r)= " << r << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
