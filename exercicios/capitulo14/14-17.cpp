#include <iostream>
#include <cmath>

double cosseno(double x);

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    cout << "digite x: "; cin >> x;
    cout << cosseno(x) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double cosseno(double x)
{
    double c = 0.0;
    double p = 1.0, erro = 1E-10;
    double q = -x * x;
    for(int k = 1; fabs(p) > erro; k += 2){
        c += p;
        p *= q / (k * (k + 1));
    }
    return c;
}

