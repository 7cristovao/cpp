#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, z, y;
    cout << "\nx= "; cin >> x;
    cout << "\ny= "; cin >> y;
    if (x == 2 || y <= 5)
        cout << "\nnao existe funcao definida";
    else
    {
        z = (1/(2-x))+sqrt(fabs(x))-log(y-5);
        cout << "\nz= " << z;
    }
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
