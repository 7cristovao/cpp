#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx= "; cin >> x;
    if (x < 0)
    {
        y = 1/x;
        cout << "\ny= " << y;
    }
    else if (x >= 0 && x <= 100)
        cout << "\nnao existe funcao definida";
    else
    {
        y = sqrt(x)/x;
        cout << "\ny= " << y;
    }
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
