#include <iostream>

using namespace std;

double soma(double a, double b)
{
    return a+b;
}

double metade(double a)
{
    return a/2.0;
}

double media(double a, double b)
{
    return metade(soma(a,b));
}

int main(int argc, char *argv[])
{
    double a, b, m;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    m = media(a,b);
    cout << "\nmedia = " << m << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
