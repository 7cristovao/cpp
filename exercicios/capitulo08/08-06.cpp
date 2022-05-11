#include <iostream>
#include <cmath>

using namespace std;

double logn(double x, double n)
{
    return log(x)/log(n);
}

int main(int argc, char *argv[])
{
    double x, n, y;
    cout << "\nx = "; cin >> x;
    cout << "\nbase n = "; cin >> n;
    y = logn(x, n);
    cout << "\nlogn = " << y;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
