#include <iostream>
#include <cmath>
using namespace std;
int main (int argc, char *argv[])
{
    double x, y;
    cout << "x = "; cin >> x;
    if (x>=0)
    {
        y = sqrt(x);
        cout << "y = " << y << endl;
    }
    else
        cout << "Nao existe funcao definida!";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
