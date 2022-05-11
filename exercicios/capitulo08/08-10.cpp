#include <iostream>
#include <cmath>

using namespace std;

double distancia (double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));
}

int main(int argc, char *argv[])
{
    double x1, x2, y1, y2, d;
    cout << "\nDigite os valores de x1 y1 x2 e y2: ";
    cin >> x1 >> y1 >> x2 >> y2;
    d = distancia(x1,y1,x2,y2);                                  
    cout << "\ndistan= " << d << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
