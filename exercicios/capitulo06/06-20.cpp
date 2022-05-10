#include <iostream>
#include <cmath>
using namespace std;
int main (int argc, char *argv[])
{
    double x, y;
    cout << "x = "; cin >> x;
    if (x>2)
        y = x/(x-2);
    if (x==2) // falta o else if
        cout << "Nao existe funcao definida!";
    if (x<2) // falta o else
        y = x*x+1;
    cout << "y = " << y << endl; // essa linha vai apenas onde nao tem erro
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
