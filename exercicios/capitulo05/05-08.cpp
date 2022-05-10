#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c;
    cout << "\na = "; cin >> a; 
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    if (pow(a,2) == (pow(b,2) + pow(c,2)))
        cout << "\nRetangulo\n";
    else if (pow(a,2) < pow(b,2) + pow(c,2))
        cout << "\nAcutangulo\n";
    else
        cout << "\nObtusangulo\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
