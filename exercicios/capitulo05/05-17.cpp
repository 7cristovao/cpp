#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double x, y, a, b;
    a = 2;
    b = 3;
    cout << "\nx = "; cin >> x;
    y =  b*sqrt(pow(a,2)-pow(x,2))/a;
    cout << "\ny = " << y;
    if (y == 0 || x == 0)
        cout << "\nponto da linha da elipse";
    else if (y > -3 && y < 3)
        cout << "\nponto dentro da elipse";
    else
        cout << "\nponto fora da elipse";
    cout << "\n";
    system("\n read -p 'Aperte Enter para continuar...' var");    
    return 0;
}
