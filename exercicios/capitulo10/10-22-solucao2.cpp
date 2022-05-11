#include <iostream>
#include <cmath>

using namespace std;

double soma(int n, double x)
{
    int i, b;
    double s, a;
    s = 0;
    a = 0.2; b = 5;
    for (i=1.0; i<=n; i++)
    {
        s = a*pow(x,b) + s;
        a += 0.3;
        b += 2;
    }
    return s;
}

int main(int argc, char *argv[])
{
    double n, s, x;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    s = soma(n, x);
    cout << "Soma = " << s << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
