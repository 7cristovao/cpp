#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return (pow(M_E,x)-pow(x,2))/2;
}

void exibir(int n)
{
    for (int i = 1; i <= n; i++)
    {
        double x = 2*i-1;
        cout << 2*i-1 << " ";
        cout << f(x) << endl;
    }
}

int main(int argc, char *argv[])
{
    int n, x;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    exibir(n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
