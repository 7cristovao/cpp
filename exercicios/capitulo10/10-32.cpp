#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return sin(x) + 1;
}

double integral(double a, double b, int n)
{
    double s = 0.0;
    double h = (b-a)/n;
    for (int i=0;i<=n;i++)
    {
        double xi = a+i*h;
        double yi = f(xi);
        if (i == 0 || i == n)
            s = s + yi/2.0;
        else
            s = s + yi;
    }
    s = s*h;
    return s;
}

int main(int argc, char *argv[])
{
    int i, n; double a, b, s;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    if (a<b)
    {
        cout << "n = "; cin >> n;
        s = integral(a,b,n);
        cout << "area = " << s << endl;
    }
    else 
        cout << "Dados invalidos!" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
/* 
    yi=sen(xi)+1;   //used
    x0=a;
    xn=b;
    h=(b-a/n;
    xi=x0+i*h;
    area=h*(y0/2+yn/2+y1+y2+y3+ ... + ynmenos1);
*/
