#include <cmath>
#include <iostream>

using namespace std;

double seno(double x, int n)
{
    int i, k; double p, s, x2;
    x = x * M_PI / 180.0;
    x2 = -x*x;
    p = x;
    s = p;
    k = 3;
    for (i=2; i<=n; i++)
    {
        p = p * x2/(k*(k-1));
        s = s + p;
        k = k + 2;
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
