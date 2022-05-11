#include <iostream>
#include <cmath>

using namespace std;

double distancia(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0)+pow(z2-z1,2.0));
}

int main(int argc, char *argv[])
{
    double x1, x2, y1, y2, z1, z2, d;
    cout << "\nDigite os valores de x1 y1 z1 x2 y2 e z2: ";
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    d = distancia(x1,y1,z1,x2,y2,z2);                                  
    cout << "\ndistan= " << d << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
