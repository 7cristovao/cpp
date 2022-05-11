#include <iostream>
#include <cmath>

using namespace std;

double secante(double p)
{
    return 1/cos(p);
}

int main(int argc, char *argv[])
{
    double p, y;
    cout << "\np = "; cin >> p;
    y = secante(p);
    cout << "\ny = " << y;
    cout << " radianos\n";
    system("read -p 'Aperte Enter para continuar' var");
    return 0;
}
