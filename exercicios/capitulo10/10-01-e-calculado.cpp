#include <iostream>
#include <cmath>

using namespace std;

int fatorial(int o)
{
    return (o == 1 || o == 0) ? 1 : fatorial(o-1) * o;
}

int main(int argc, char *argv[])
{
    double i, n, s, x;
    s = 0;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    for (i = 1; i <= n; i++)
    {
        cout << (2*i/(2*i+1))*pow(x,3*(i+2)) << endl;
//        cout << 2*i << "/" << 2*i+1 << "*x^" << (3*i)+2 << endl;
    }  
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
