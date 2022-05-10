#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    double a, b, c, delta, x1, x2, z, xi, xii;
 
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    if (a == 0)
        if (b == 0)
            if (c == 0)
                cout << "\nQualquer x eh solucao" << "\n" << endl;
            else
                cout << "\nNao existe solucao" << "\n" << endl;
        else
        {
            x1 = -c/b;
            cout << "\n-c/b = x1 = " << x1 << "\n" << endl;
        }
    else
    {
        delta = pow(b,2) - 4 * a * c;
        if (delta < 0)
        {
            xi = (-b/2*a) + (sqrt((delta)/2*a)*z);
            xii = (-b/2*a) - (sqrt((delta)/2*a)*z);
            cout << "\nxi = " << xi;
            cout << "\nxii = " << xii << "\n" << endl;
        }
        else if (delta == 0)
        {
            x1 = -b/2*a;
            x2 = -b/2*a;
            cout << "\nx1 = " << x1;
            cout << "\nx2 = " << x2 << "\n" << endl;
        }
        else
        {
            x1 = (-b + sqrt(delta))/2*a;
            x2 = (-b - sqrt(delta))/2*a;
            cout << "\nx1 = " << x1;
            cout << "\nx2 = " << x2 << "\n" << endl;
        }
    }
    cout << "\n" << endl;
}
