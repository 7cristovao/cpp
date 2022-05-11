#include <iostream>
#include <cmath>

using namespace std;

double soma(int n, double x)
{
    double s = 0.0;
    if (x >= 0)
        for (int i=1.0; i<=n; i++)
            s = 2*((1.0/(2.0*i-1.0))*pow(((x-1.0)/(x+1.0)),((2.0*i)-1.0))) + s;
    else 
            cout << "valor de x nao eh positivo" << endl;
    return s;
}

int main(int argc, char *argv[])
{
    double n, s, x;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    s = soma(n, x);
    double y = log(s);
    cout << "Soma = " << s << "  log(x) = " << y << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
