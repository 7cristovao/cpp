#include <iostream>
#include <cmath>

using namespace std;

double areaSuperficieEsfera(double r)
{
    return 4*M_PI*r*r;
}

int main(int argc, char *argv[])
{
    double r, area;
    cout << "\nraio = "; cin >> r;
    area = areaSuperficieEsfera(r);
    cout << "area da superficie da esfera = " << area << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
