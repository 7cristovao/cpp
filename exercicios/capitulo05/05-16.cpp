#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double x, y, a, b;
    cout << "\nx= "; cin >> x;
    cout << "\ny= "; cin >> y;
    a = abs(x - 0);
    b = abs(y - 0);
    if (a > b)
        cout << "\no ponto y esta mais proximo da origem dos eixos de que o x";
    else if (a < b)
        cout << "\no ponto x esta mais proximo da origem dos eixos de que o y";
    else
        cout << "\no ponto x esta na mesma distancia dos eixos que o ponto y";

    cout << "\n";
    system("\n read -p 'Aperte Enter para continuar...' var");    
    return 0;
}
