#include <iostream>
#include <cmath>

double serieAbaixo(double x);

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    cout << "digite x: "; cin >> x;
    cout << serieAbaixo(x) << endl;    
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double serieAbaixo(double x)     // Definicao da funcao fatorial
{
    int i, c;
    double s, p;
    s = 0.0;
    p = exp(x) + sqrt(fabs(x));
    c = 1;
    i = 1;
    while (p > 0.0001){
        s += c * p;
        i++;
        c = -c;
        p = 1.0 / i;
    }
    return s;
}
