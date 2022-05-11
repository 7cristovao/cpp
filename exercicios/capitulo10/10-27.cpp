#include <iostream>
#include <cmath>

using namespace std;

    double pi(int n)
    {
        double yo, ao, pot2, r, yp, s, ap;
        int k;
        yo = sqrt(2) - 1;
        ao = 6 - 4 * sqrt(2);
        pot2 = 2;
        for(k = 0; k < n; k = k + 1){
            r = sqrt(sqrt(1-yo*yo*yo*yo));
            yp = (1 - r)/(1 + r);
            s = 1 + yp;
            s = s * s * s * s;
            pot2 = pot2 * 4;
            ap = ao * s - pot2 * yp * (1 + yp + pow(yp,2));
            yo = yp;
            ao = ap;
        }
        return 1/ap;
    }

int main(int argc, char *argv[])
{
    int n;
    n = 1;
    cout << "pi = " << pi(n) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
