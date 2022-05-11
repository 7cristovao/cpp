#include <iostream>
#include <cmath>

using namespace std;

double media(double x, int n)
{
    double s;
    s = 0.00;
    for (int i=1.0; i<=n; i++)
        s = s + x * i;
    return s;
}

int main(int argc, char *argv[])
{
    int n;
    double x, m;
    cout << "n = "; cin >> n;
    for (int i=1; i<=n; i++)
        cin >> x >> endl;
    m = media(x, n);
    cout << "media = " << m << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
