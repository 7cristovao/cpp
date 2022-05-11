#include <iostream>
#include <cmath>

using namespace std;

double MaiorValor(double a, double b, double c)
{
    double maior;
    maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    return maior;
}

int main(int argc, char *argv[])
{
    double a, b, c, m;
    cout << "Digite os valores de a, b e c: \n";
    cin >> a >> b >> c;
    m = MaiorValor(a,b,c);
    cout << "Maior valor: " << m << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
