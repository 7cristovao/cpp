#include <iostream>
#include <cmath>

using namespace std;

double somatorio_yk(double yk)
{
    int n;
    int syk = 0;
    for (int k=1; k <= n; k++)
        syk = syk + yk * n;
    return syk;
}

double somatorio_xk(double xk)
{
    int n;
    int sxk = 0;
    for (int k=1; k <= n; k++)
        sxk = sxk + xk * n;
    return sxk;
}

double somatorio_xkyk(double xk, double yk)
{
    int n;
    int sxkyk = 0;
    for (int k=1; k <= n; k++)
        sxkyk = sxkyk + xk * yk * n;
    return sxkyk;
}

double somatorio_xkxk(double xk)
{
    int n;
    int sxkxk = 0;
    for (int k=1; k <= n; k++)
        sxkxk = sxkxk + xk * xk * n;
    return sxkxk;
}

double b(double sxkyk, double sxk, double syk, double sxkxk)
{
    int n;
    return ((sxkyk - ((sxk * syk)/n))/(sxkxk)-(pow(sxk,2)/n));
}

    int main(int argc, char *argv[])
{
    int n;
    double y, x, yk, xk, syk, sxk, sxkyk, sxkxk, a, c;
    cout << "\nn = "; cin >> n;
    cout << "\n****sxk = " << sxk;
    cout << "\n****syk = " << syk;
    a = (yk - c * sxk)/n;
    c = b(sxkyk, sxk, syk, sxkxk);
    for (int k = 1; k <= n; k++)
    {
    cout << "\nyk = "; cin >> yk;
    cout << "\nxk = "; cin >> xk;
    y = a + c * x;
    cout << y;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
