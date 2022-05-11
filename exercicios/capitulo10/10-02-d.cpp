#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double i, n, x, a0, a1, a2, r;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    a0 = (2.0/5.0)*pow(x,7.0);
    a1 = (4.0/8.0)*pow(x,12.0);
    a2 = (6.0/11.0)*pow(x,17.0);
    cout << a0 << "\n" << a1 << "\n" << a2 << "\n" << endl;
    for (i = 1; i < n+1; i++)
    {
        cout << ((2.0*(i-1.0))/(3.0*i-1.0))*pow(x,5.0*i-3.0) << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
