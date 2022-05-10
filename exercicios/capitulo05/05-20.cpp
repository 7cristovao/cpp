#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c;
    cout << "\na = "; cin >> a; 
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    if ((a || b || c) == 0)
        cout << "\ntriangulo retangulo nao existe porque todos ou alguns(algum) dos valores reais são iguais a zero";
    else if (pow(a,2) == (pow(b,2) + pow(c,2)))
        cout << "\npodem ser os lados de um triangulo Retangulo\n";
    else if (pow(a,2) < pow(b,2) + pow(c,2))
        cout << "\npodem ser os lados de um triangulo Acutangulo\n";
    else
        cout << "\npodem ser os lados de um triangulo Obtusangulo\n";
    cout << "\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
