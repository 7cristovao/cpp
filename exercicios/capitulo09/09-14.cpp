#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double y, x, n, i;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cin >> x;
        if (x < -10)
            cout << log(fabs(x))+3 << endl;
        else if ( x >= -10 && x <= 10)
            cout << pow(x,5) << endl;
        else
            cout << sqrt(x-9) << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
