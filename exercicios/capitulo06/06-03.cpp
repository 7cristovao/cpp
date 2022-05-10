#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx= "; cin >> x;
    if (x <= -10)
        y = pow(M_E,x) + log(fabs(x-10));
    else
        y = pow(x,2) + sqrt(fabs(x));
    cout << "\ny= " << y << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
