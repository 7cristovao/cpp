#include <iostream>
#include <cmath>

using namespace std;

void exibir(double x, int n)
{
    for (int i = 1; i <= n; i++)
        cout << pow(x,2*i) << endl;
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
