#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double x, y, a, b;
    int i, n;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        a = 2;
        b = 3;
        cout << "\nx = "; cin >> x;
        y =  b*sqrt(pow(a,2)-pow(x,2))/a;
        cout << "\ny = " << y;
        if (y == 0 || x == 0)
            cout << "\nponto da linha da elipse" << endl;
        else if (y > -3 && y < 3)
            cout << "\nponto dentro da elipse" << endl;
        else
            cout << "\nponto fora da elipse" << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
