#include <iostream>
#include <cmath>

using namespace std;

double soma(int n, double x)
{
    double s = 0.0;
    for (int i=1.0; i<=n; i++)
        s = (0.1*(3.0*i-1.0)) * pow(x,2.0*i+3.0) + s;
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
