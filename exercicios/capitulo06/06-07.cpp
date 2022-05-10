#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx= "; cin >> x;
    if (x < -2)
    {
        y = sqrt(fabs(x+1));
        cout << "\ny= " << y;
    }
    else if (x == -2 || x == 2)
        cout << "\nnao existe funcao definida";
    else if (x > -2 && x < 2)
    {
        y = 0;
        cout << "\ny= " << y;
    }
    else
    {
        y = sqrt(fabs(1-x));
        cout << "\ny= " << y;
    }
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
