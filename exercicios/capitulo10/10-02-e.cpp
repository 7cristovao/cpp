#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double i, n, x, a0, a1, a2, r;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    a0 = 1*pow(x,4)/(x+3);
    a1 = 3*pow(x,5)/(x+4);
    a2 = 5*pow(x,6)/(x+5);
    cout << a0 << "\n" << a1 << "\n" << a2 << "\n" << endl;
    for (i = 1; i <= n; i++)
    {
        cout << ((2*i-3)*pow(x,i+2))/(x+i+1) << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
