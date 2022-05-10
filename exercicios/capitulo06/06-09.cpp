#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx= "; cin >> x;
    if (x == 2 || x == 0 || x == -2)
        cout << "\nnao existe funcao definida";
    else
    {
        y = x/((pow(x,2)-4))+sqrt(fabs((pow(x,3)-2)/5))+(1/pow(x,2));
        cout << "\ny= " << y;
    }
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
