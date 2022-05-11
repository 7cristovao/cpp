#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double n, a, c, r, i;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> r;
        a = M_PI*r*r;
        c = 2*M_PI*r;
        cout << a << "\n" << c << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
