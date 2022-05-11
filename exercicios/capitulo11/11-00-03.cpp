#include <cmath>
#include <iostream>

using namespace std;

long double fat(int x)
{
    int j; long double f;
    f = 1;
    for (j=1; j<=x; j++)
        f = f * j;
    return f;
}
double seno(double x, int n)
{
    int i, c; double s;
    x = x * M_PI / 180.0;
    s = 0; c = 1;
    for (i=1; i<=n; i++)
    {
        s = s + pow(x,2*i-1)/fat(2*i-1)*c;
        c = -c;
    }
    return s;
}
int main(int argc, char *argv[])
{
    int n; double x, s;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    s = seno(x,n);
    cout << "s = " << s << endl;
    system("pause");
    return 0;
}
