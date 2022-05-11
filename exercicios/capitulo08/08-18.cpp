#include <iostream>
#include <cmath>

using namespace std;

double f1(double x)
{
    if (x >= 0)
        return pow(M_E,x)+log(fabs(x-10));  
    else // (x < 0)
        return pow(x,2)+sqrt(fabs(x));
}

int main(int argc, char *argv[])
{
    double x, y;
    cin >> x;
    y = f1(x);
    cout << y << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
