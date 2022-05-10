#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx= "; cin >> x;
    if (x <- 10.0)
    {
        y = log(fabs(x))+3.0;
        cout << "\ny = " << y;
    }
    if (x >= -10 && x <= 10)
    {
        y = pow(x,5);
        cout << "\ny = " << y;
    }
    if (x > 10)
    {
        y = sqrt(x-9);
        cout << "\ny = " << y;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
