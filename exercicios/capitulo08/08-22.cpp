#include <iostream>
#include <string>

using namespace std;

string classifica(double a, double b, double c)
{
    if (a*a == b*b == c*c)
        return "Retangulo";
    if (a*a > b*b + c*c)
        return "Obtusangulo";
    if (a*a < b*b + c*c)
        return "Acutangulo";
    else 
        return 0;
}

int main(int argc, char *argv[])
{
    double a, b, c;
    string r;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    r = classifica(a,b,c);
    cout << "Classificacao = " << r << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
