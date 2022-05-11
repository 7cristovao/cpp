#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double i, n, x, a0, a1, a2, r;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    a0 = 0.3*x;
    a1 = 0.5*(x*x*x*x);
    a2 = 0.7*(x*x*x*x*x*x*x);
    cout << a0 << "\n" << a1 << "\n" << a2 << "\n" << endl;
    for (i = 1; i <= n; i++)
    {
        cout << 0.1*(2*i+1)*pow(x,3*i-2) << endl;
//          cout << 0.1 + 0.2 * i << "x^" << (3*i)-2 << endl; 
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
