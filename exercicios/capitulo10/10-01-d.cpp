#include <iostream>
#include <cmath>

using namespace std;

int fatorial(int o)
{
    return (o == 1 || o == 0) ? 1 : fatorial(o-1) * o;
}

int main(int argc, char *argv[])
{
    double i, n, s, o;
    s = 0;
    cout << "n = "; cin >> n;
//    cout << "x = "; cin >> x;
    for (i = 1; i <= n; i++)
    {
//        cout << (i/fatorial(i+2))*pow(x,i+1) << endl;
        cout << i << "/" << i+2 << "! * x^" << i+1 << endl;
    }  
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
