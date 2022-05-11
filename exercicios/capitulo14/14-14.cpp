#include <iostream>
#include <cmath>

double TV(double x);

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    cout << "digite x: "; cin >> x;
    cout << TV(x) << endl;    
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double TV(double x)     // Definicao da funcao fatorial
{
    double q = -x*x;
    double p = q * x / 6.0;
    double k = 2.0;
    double s = M_PI;
    double erro = 0.0000001;
    while (fabs(p) > erro) {
        s = s + p;
        p = p * q / (k *( k + 1.0));
        k = k + 2.0;
    }
    return s;
}
