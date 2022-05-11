#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double x, y, i;
    x = 0.00;
    for (x = 0.00; x <= 3.10; x = x + 0.20) 
    {
        y = ((x*x)+1.0)/(x+2.0);
        cout << "x = " << x << ", y = " << y << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
