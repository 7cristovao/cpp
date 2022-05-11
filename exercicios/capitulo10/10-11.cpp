#include <iostream>
#include <cmath>

using namespace std;

void exibir(double x, int n)
{
    for (int i = 1; i <= n; i++)
        cout << ((3.0*i-2.0)/(4.0*i-1.0))*pow(x,0.2*i) << endl;
}

int main(int argc, char *argv[])
{
    int n;
    double x;
    cout << "x = "; cin >> x;
    cout << "n = "; cin >> n;
    exibir(x,n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
