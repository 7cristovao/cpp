#include <iostream>
#include <cmath>

using namespace std;

double media(double x)
{
    double s = 0.00; int n;
    for (int i=1; i<=n; i++)
        s = s + x*i/n;
    return s; 
}

double desvioPadrao(double u)
{
    double z = 0.00, x; int n;
    double m = media(x);
    for (int i=1; i<=n; i++)
        z = z + pow((u*i)-m,2.00)/(n-1.00);
    return z;
}

int main(int argc, char *argv[])
{
    int n, i;
    float x, xx, m, w, s, z, u;
    cout << "n = "; cin >> n;
    for (i=1; i<=n; i++)
    {
        cout << "\nx = "; cin >> x;
        cout << "\nx = "; cin >> u;
    }
    w = desvioPadrao(z);
    cout << "s = " << s << endl;
    cout << "z = " << z << endl;
    cout << "media = " << m << endl;
    cout << "desvio padrao = " << w << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

