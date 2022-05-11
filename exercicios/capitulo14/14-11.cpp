#include <iostream>
#include <cmath>

double fat(int n);
double seno(double x);

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cout << "digite n: "; cin >> n;
    cout << "digite x: "; cin >> x;
    cout << fat(n) << endl;    
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double fat(int n)     // Definicao da funcao fatorial
{
    int i; double f;
    f = 1.0;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

double seno(double x)
{
    int i, c;
    double s, p;
    x *= M_PI / 180.0; // x = x * M_PI / 180
    s = 0.0;
    p = x;
    c = 1;
    i = 1;
    while (p > 1E-08){
        s += c * p;
        i += 2;
        c = -c;
        p = pow(x, i) / fat(i); // Chamadas.
    }
    return s;
}
