#include <iostream>
#include <cmath>

using namespace std;

double raiz(double x, double a, double b)
{
    return pow(x,b/a);
}

int main(int argc, char *argv[])
{
    double x, a, b, y;
    cout << "\nx = "; cin >> x;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    y = raiz(x,a,b);
    cout << "\ny = " << y;
    system("read -p 'Aperte Enter para continuar' var");
    return 0;
}
