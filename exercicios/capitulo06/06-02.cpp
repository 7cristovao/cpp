#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx= "; cin >> x;
    if (x < 2)
        y = sqrt(fabs(x));
    else if (x == 2)
        y = 0;
    else
        y = log10(x);
    cout << "\ny= " << y << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
